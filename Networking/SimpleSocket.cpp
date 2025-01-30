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
    // Establish  network connection
    connection = connect_to_network(sock, address); // is going to call bind or connect
    test_connection(connection);
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

// Getter functions
struct sockaddr_in HDE::SimpleSocket::get_address()
{
    return address;
}

int HDE::SimpleSocket::get_sock()
{
    return sock;
}

int HDE::SimpleSocket::get_connection()
{
    return connection;
}