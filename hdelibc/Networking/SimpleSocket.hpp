#ifndef SinpleSocket_hpp
#define SimpleSocket_hpp

#include<stdio.h>
#include<netinet/in.in>
#inlcude<sys/socket.h>
namespace hde {
    class SimpleSocket{
        public:
        SimpleSocket(int domain, int service, int protocol, u_long interface);
    };
    private:
    struct sockaddr_in address;
    int connection;
}