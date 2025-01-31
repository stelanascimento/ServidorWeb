#ifndef SimpleServer_hpp
#define SimpleServer_hpp

#include <stdio.h>
#include <unistd.h>

#include "../hdelibc-networking.hpp"

namespace HDE
{
    class SimpleServer
    {
    private:
        ListeningSocket *socket; // espaço na memoria para guardar o socket.
        virtual void accepter() = 0;
        virtual void handler() = 0;
        virtual void responder() = 0;

    public:
        // Constructor
        SimpleServer(int domain, int service, int protocol, int port, u_long interface, int bklg);
        // backlog define  o número máximo de conecções pendentes que podem ficar na fila, antes de serm recusadas.
        virtual void launch() = 0;
        ListeningSocket *get_socket();
    };
}

#endif /* SimpleServer_hpp */