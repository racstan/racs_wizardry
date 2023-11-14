#include <iostream>
#include <grpcpp/grpcpp.h>
#include "greeter.grpc.pb.h"

using grpc::Channel;
using grpc::ClientContext;
using grpc::Status;
using greeter::Greeter;
using greeter::HelloRequest;
using greeter::HelloResponse;

class GreeterClient {
public:
  GreeterClient(std::shared_ptr<Channel> channel) : stub_(Greeter::NewStub(channel)) {}

  std::string SayHello(const std::string& name) {
    HelloRequest request;
    request.set_name(name);
    HelloResponse response;
    ClientContext context;

    Status status = stub_->SayHello(&context, request, &response);

    if (status.ok()) {
      return response.greeting();
    } else {
      return "RPC failed";
}
}


private:
  std::unique_ptr<Greeter::Stub> stub_;
};

int main() {
  GreeterClient greeter(grpc::CreateChannel("localhost:50051", grpc::InsecureChannelCredentials()));
  std::string user("world");
  std::string reply = greeter.SayHello(user);
  std::cout << "Greeter received: " << reply << std::endl;
  return 0;
}




