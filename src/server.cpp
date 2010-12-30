// src/server.cpp
//
//

#include <iostream>
#include <boost/bind.hpp>
#include "dns/dns.hpp"
#include "kerberos/kerberos.hpp"
#include "ldap/ldap.hpp"

#include "server.hpp"


namespace urpc {
  
class NotImplemented : public IService {
  /** The default IService used if a service is not found in the serviceMap.
    * We simply log the event and continue.
    */
  public:
    std::string getService () const { return "NotImplemented"; }
    int getVersion () const { return 0; }
    void setRequest (const pb::RequestEnvelope &envelope, bool isMore) {
      std::cout << envelope.service() << std::endl;
    }
    bool getReply (pb::ReplyEnvelope &envelope) { return false; }
};
  
  
void freeWire (void *data, void *hint) { free (data); }

Server::Server (const std::string &clientConn) : clientConn(clientConn) { 
    
  const int nIOThread = 1;
  workerConn = "inproc://workers";

  context = boost::shared_ptr<zmq::context_t> (new zmq::context_t (nIOThread));
  workerSocket = boost::shared_ptr<zmq::socket_t> 
    (new zmq::socket_t (*context, ZMQ_XREQ));
  clientSocket = boost::shared_ptr<zmq::socket_t> 
    (new zmq::socket_t (*context, ZMQ_XREQ));
}
Server::~Server () {
  
  // TODO: kill threads here
}
void Server::addService (boost::function<IService* (void)> factory) {  
  
  boost::shared_ptr<urpc::IService> service (factory ());
  serviceMap [service->getService ()] = factory;
}
void Server::start () {
  
  workerSocket->bind (workerConn.c_str ());
  clientSocket->bind (clientConn.c_str ());
  
  for (int i = 0; i != 3; ++i) {
    workerPool.add_thread (
      new boost::thread (&Server::worker, boost::ref(this), i));
  }	
  
  zmq::device (ZMQ_QUEUE, *clientSocket, *workerSocket); 
}
void Server::worker (int id) {
  
  bool moreToReceive;
  bool moreToSend;
  pb::RequestEnvelope requestEnvelope;
  pb::ReplyEnvelope replyEnvelope;
  zmq::socket_t socket (*context, ZMQ_REP);
  
  socket.connect (workerConn.c_str ());

  while (true) {    
    moreToReceive = getRequest (socket, requestEnvelope);

    // creating appropriate service to handle request
    TServiceMap::iterator it = serviceMap.find (requestEnvelope.service ());
    bool notInServiceMap = (it == serviceMap.end());
    boost::shared_ptr<urpc::IService> service 
      (notInServiceMap ? new NotImplemented : it->second ());  
    
    std::cout << id << ": " << requestEnvelope.service () << " -> " << 
      service->getService () << std::endl;
    service->setRequest (requestEnvelope, moreToReceive);
    requestEnvelope.Clear ();
    
    while (moreToReceive) {
      moreToReceive = getRequest (socket, requestEnvelope);
      service->setRequest (requestEnvelope, moreToReceive);
      requestEnvelope.Clear ();
    }
    
    do {
      moreToSend = service->getReply (replyEnvelope);
      sendReply (socket, replyEnvelope, moreToSend);
      replyEnvelope.Clear ();
    } while (moreToSend);
  }
}
bool Server::getRequest (zmq::socket_t &socket, 
                         pb::RequestEnvelope &envelope) {
 
  long long more;
  size_t sz = sizeof (more);
  zmq::message_t request;
  
  socket.recv (&request);
  socket.getsockopt (ZMQ_RCVMORE, &more, &sz);
  envelope.ParseFromArray (request.data(), request.size());
  
  return (more != 0);
}
void Server::sendReply (zmq::socket_t &socket, 
                        const pb::ReplyEnvelope &envelope, bool moreToSend) {
  
  int sendFlag = moreToSend ? ZMQ_SNDMORE : 0;
  
  // We have a potential memory leak here in the event of a thread cancelation 
  // or exception, but this seems to be only way to interface with the ZMQ 
  // library while avoiding memory copying.
  
  char *wire = static_cast<char*> (malloc (envelope.ByteSize ()));
  envelope.SerializeToArray (wire, envelope.ByteSize());
  zmq::message_t reply (wire, envelope.ByteSize(), freeWire, NULL);
  socket.send (reply, sendFlag);
}

}
