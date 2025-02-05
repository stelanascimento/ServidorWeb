Servidor Web em C++

Este projeto implementa um servidor web simples em C++, utilizando sockets e conceitos de programação orientada a objetos, como herança, polimorfismo, funções virtuais e encapsulamento com getters e setters.

📌 Funcionalidades

Aceita conexões de clientes.

Processa requisições e envia respostas.

Utiliza herança, polimorfismo e funções virtuais em C++.

Encapsulamento de atributos através de getters e setters.

🏗 Estrutura do Projeto

📂 Sockets

Contém classes responsáveis pela criação e gerenciamento de sockets:

SimpleSocket: Classe base para todos os sockets.

BindingSocket: Herda de SimpleSocket, adicionando a funcionalidade de bind().

ListeningSocket: Herda de BindingSocket, adicionando a funcionalidade de listen().

📂 Servers

Contém classes responsáveis pela criação e gerenciamento do servidor:

SimpleServer: Classe abstrata que define a estrutura básica de um servidor.

TestServer: Herda de SimpleServer, implementando a aceitação, manipulação e resposta a requisições.

🚀 Passo a Passo para Rodar o Projeto

🛠 Pré-requisitos

Sistema Operacional: Linux, macOS ou Windows (com WSL).

Compilador C++ (GCC): Verifique com g++ --version. Se necessário, instale:

Ubuntu: sudo apt install g++

MacOS: brew install gcc

Windows (WSL): Instalar via sudo apt install g++

📌 Compilação e Execução

1️⃣ Clone o repositório

  git clone https://github.com/seu-usuario/seu-repositorio.git
  cd seu-repositorio

2️⃣ Compile o projeto

g++ Servers/test.cpp Servers/TestServer.cpp Servers/SimpleServer.cpp \
   Sockets/SimpleSocket.cpp Sockets/BindingSocket.cpp Sockets/ListeningSocket.cpp -o test.exe

3️⃣ Execute o servidor

./test.exe

Saída esperada:

==== WAITING ======

4️⃣ Acesse no navegador
Digite no navegador:

http://127.0.0.1:80

Saída esperada no navegador:

Hello from server

5️⃣ Parar o servidor
No terminal, pressione Ctrl + C para encerrar.

⚠️ Problemas Comuns e Soluções

❌ Porta já em uso

Erro:

bind: Address already in use

Solução:

Edite TestServer.cpp para usar a porta 8080 e recompile.

Acesse pelo navegador com http://127.0.0.1:8080

❌ Permissão negada

Erro ao usar portas abaixo de 1024:

bind: Permission denied

Solução:

Use uma porta acima de 1024 (ex: 8080).

Ou execute como superusuário (não recomendado):

sudo ./test.exe

🔗 Melhorias Futuras

📌 Implementar suporte a múltiplas conexões simultâneas com multithreading.

📌 Criar um parser HTTP para processar requisições e respostas.

📌 Melhorar tratamento de erros para falhas de conexão.