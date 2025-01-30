#include "SimpleSocket.hpp"

// Default Constructor
HDE::SimpleSocket::SimpleSocket(int domain, int service, int protocol, int port, u_long interface)
{
    // Define address structure
    address.sin_family = domain;
    address.sin_port = htons(port); //=>ordenar os bytes do inteiro para ordem da rede.
    address.sin_addr.s_addr = htonl(interface);

    // Establish Socket -conection
    sock = socket(domain, service, protocol);
    test_connection(sock); // Test the socket
}

// The test connection virtual Function
void HDE::SimpleSocket::test_connection(int item_to_test)
{
    // Confirms that the socket or connection has been properly established.
    if (item_to_test < 0)
    {
        perror("Failed to connect....");
        exit(EXIT_FAILURE);
    }
}

// Getter functions, os seguintes métodos retronam informações do socket
struct sockaddr_in HDE::SimpleSocket::get_address()
{
    return address; // retorna a estrutura sockaddr_in contendo os detalhes do endereco.
}

int HDE::SimpleSocket::get_sock()
{
    return sock; // retorna o identificador do socket
}

int HDE::SimpleSocket::get_connection()
{
    return connection; // retorna o status da conexao
}