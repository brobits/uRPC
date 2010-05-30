// http://msdn.microsoft.com/en-us/library/aa365968(VS.85).aspx
// Link with IPHlpAPI.lib

#include <winsock2.h>
#include <iphlpapi.h>
#include <stdlib.h>
#include <windows.h>

#include <string>
#include <vector>

namespace urpc {
namespace dns {

void getDNSServer(std::vector<std::string> &server)
{
  FIXED_INFO *pFixedInfo;
  ULONG ulOutBufLen;
  IP_ADDR_STRING *pIPAddr;

  pFixedInfo = (FIXED_INFO *) malloc(sizeof (FIXED_INFO));
  ulOutBufLen = sizeof (FIXED_INFO);

  // get the size of pFixedInfo
  GetNetworkParams(pFixedInfo, &ulOutBufLen);
  free(pFixedInfo);

  // get actual data
  pFixedInfo = (FIXED_INFO *) malloc(ulOutBufLen);
  GetNetworkParams(pFixedInfo, &ulOutBufLen);

  server.push_back(pFixedInfo->DnsServerList.IpAddress.String);  
  pIPAddr = pFixedInfo->DnsServerList.Next;
  while (pIPAddr) 
  {
    server.push_back(pIPAddr->IpAddress.String);
    pIPAddr = pIPAddr->Next;
  }
  free(pFixedInfo);
}


}
}
