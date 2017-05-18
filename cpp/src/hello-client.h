#ifndef __HELLO_CLIENT__
#define __HELLO_CLIENT__

#include <memory>
#include <string>
#include <grpc++/grpc++.h>

#include "protos/message.pb.h"
#include "protos/message.grpc.pb.h"

using grpc::Channel;
using grpc::ClientContext;
using grpc::Status;
using helloworld::HelloRequest;
using helloworld::HelloReply;
using helloworld::Greeter;

class HelloClient {
 public:
  HelloClient(std::shared_ptr<Channel> channel);
  std::string SayHello(const std::string& user);

 private:
  std::unique_ptr<Greeter::Stub> stub_;
};

#endif //__HELLO_CLIENT__