#include "ConnectingSocket.hpp"

// Constructor
HDE::ConnectingSocket::ConnectingSocket(int domain, int service, int protocol, int port, u_long interface) : SimpleSocket(domain, service, protocol, port, interface)
{                                                                  // Essa classe vai herdar de SimpleSocket e vai adiciona a funcionalidade de associar o socket a um endereco especifico utilizando bind().
    set_connection(connect_to_network(get_sock(), get_address())); // vai executar o bind()
    test_connection(get_connection());                             // verifica se o bind foi bem sucedido.
}
// Definition of connect_to_network virtual function
int HDE::ConnectingSocket::connect_to_network(int sock, struct sockaddr_in address)
{
    return bind(sock, (struct sockaddr *)&address, sizeof(address)); // casting here is converting this address to a struct sockaddr, but is making a pointer.
    // pointer to a memory location that holds this struct and has the value of address in it.
    //  retornando a bind function
}