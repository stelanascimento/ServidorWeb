#ifndef ListeningSocket_hpp
#define ListeningSocket_hpp

#include <stdio.h>

#include "BindingSocket.hpp"

namespace HDE
{
    class ListeningSocket : public BindingSocket
    {
    private:
        int backlog;
        int listening;

    public:
        // Constructor
        ListeningSocket(int domain, int service, int protocol, int port, u_long interface, int bklg);
        // backlog define  o número máximo de conecções pendentes que podem ficar na fila, antes de serm recusadas.
        // quando começar a escutar, vai ser preciso 2 argumentos pra função
        void start_listening();
    };
}

#endif /* Listening_hpp*/