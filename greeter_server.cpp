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













