#include "SimpleSocket.hpp"

hde::SimpleSocket::SimpleSocket(int domain,int service,int protocol, u_long interface){
    //define address structure
    address.sin_family =domain;
    address.sin_port=htons(port);
    address.sin_addr.s_addr = htonl(interface);
    int connections = socket(domain,service, protocol);
}