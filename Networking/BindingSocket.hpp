#ifndef BindingSocket_hpp
#define BindingSocket_hpp

#include <stdio.h>
#include "SimpleSocket.hpp"

namespace HDE
{
    class BindingSocket : public SimpleSocket
    { // vamos herdar de SimpleSocket
    public:
        // Constructor
        BindingSocket(int domain, int service, int protocol, int port, u_long interface);
        // Virtual Function from parent
        int connect_to_network(int sock, struct sockaddr_in address); // vai override  a virtual function
    };
}

#endif /* BindingSocket_hpp*/