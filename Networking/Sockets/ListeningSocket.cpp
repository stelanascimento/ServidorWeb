// ListeningSocket é filho do SimpleSocket, especificando que uma vez vinculado, o socket deve escutar a rede na porta fornecida para conexões de entrada.

#include "ListeningSocket.hpp"

// Constructors
HDE::ListeningSocket::ListeningSocket(int domain, int service, int protocol, int port, u_long interface, int bklg) : BindingSocket(domain, service, protocol, port, interface)
{
    // definir variavel backlog
    backlog = bklg;
    // começar a escutar a rede usando listen() from sys/socket.h
    start_listening();
    // Confirmar a conexão foi sucedida.
    test_connection(listening);
}

// Mutators
void HDE::ListeningSocket::start_listening()
{
    // Start listening on the network
    listening = listen(get_sock(), backlog);
}

// // Getters
// int HDE::ListeningSocket::get_listening()
// {
//     return listening;
// }

// int HDE::ListeningSocket::get_backlog()
// {
//     return backlog;
// }