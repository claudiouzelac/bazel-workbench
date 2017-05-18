#include <iostream>

#include "hello-client.h"

int main(int argc, char** argv) {

  HelloClient greeter(
      grpc::CreateChannel("localhost:50051", grpc::InsecureChannelCredentials()));
  std::string user("world");
  std::string reply = greeter.SayHello(user);
  std::cout << "Greeter received: " << reply << std::endl;

  return 0;
}