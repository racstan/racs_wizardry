#include <iostream>
#include <torch/torch.h>

struct Net : torch::nn::Module {
    Net() {

        linear = register_module("linear", torch::nn::Linear(1, 1));
}







































