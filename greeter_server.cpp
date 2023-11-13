#include <iostream>
#include <grpcpp/grpcpp.h>
#include "greeter.grpc.pb.h"

using grpc::Server;
using grpc::ServerBuilder;
using grpc::ServerContext;
using grpc::Status;
using greeter::Greeter;
using greeter::HelloRequest;
using greeter::HelloResponse;

class GreeterServiceImpl final : public Greeter::Service {
  Status SayHello(ServerContext* context, const HelloRequest* request, HelloResponse* response) override {
    std::string prefix("Hello, ");
    response->set_greeting(prefix + request->name());
    return Status::OK;
}
};

void RunServer() {
  std::string server_address("0.0.0.0:50051");

  GreeterServiceImpl service;
  ServerBuilder builder;
  builder.AddListeningPort(server_address, grpc::InsecureServerCredentials());
  builder.RegisterService(&service);

  std::unique_ptr<Server> server(builder.BuildAndStart());
  std::cout << "Server listening on " << server_address << std::endl;









