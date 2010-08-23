// src/client.cpp
//
//

#include "client.hpp"

namespace urpc {

void deleteEnvelope (void *, void *);
void deleteEnvelope (void *data, void *hint) {
  delete [] data;
}

Client::Client (const std::string &connection) {
  const int nIOThread = 1;
  urpc::kerberos::requestSessionTicket ();
  urpc::kerberos::submitSessionTicketToServer ();
  
  context = boost::shared_ptr<zmq::context_t> (new zmq::context_t(nIOThread));
  socket = boost::shared_ptr<zmq::socket_t> (new zmq::socket_t(*context, 
    ZMQ_REQ));
  socket->connect (connection.c_str());
}

void Client::sendRequest (const std::string &service, int version, 
                          const google::protobuf::Message &request, 
                          bool moreToFollow) {
  int sendFlag = moreToFollow ? ZMQ_SNDMORE : 0;
  char *wireEnvelope;
  urpc::pb::RequestEnvelope envelope;
  std::string requestString;
  
  request.SerializeToString (&requestString);
  envelope.set_service (service);
  envelope.set_version (version);
  envelope.set_request (requestString);

  wireEnvelope = new char[envelope.ByteSize()];
  envelope.SerializeToArray(wireEnvelope, envelope.ByteSize());
  zmq::message_t message (wireEnvelope, envelope.ByteSize(), deleteEnvelope, NULL);

  socket->send (message, sendFlag);
}

bool Client::getReply (google::protobuf::Message &reply) {
  long long more;
  size_t sz = sizeof (more);
  urpc::pb::ReplyEnvelope envelope;
  zmq::message_t message;

  socket->recv (&message);
  socket->getsockopt (ZMQ_RCVMORE, &more, &sz);

  //printf("recieved %d bytes\n", message.size());
  envelope.ParseFromArray (message.data(), message.size());
  reply.ParseFromString (envelope.reply());
  return (more != 0);
}


}
