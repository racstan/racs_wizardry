#include <iostream>
#include <torch/torch.h>

struct Net : torch::nn::Module {
    Net() {

        linear = register_module("linear", torch::nn::Linear(1, 1));
}

    torch::Tensor forward(torch::Tensor x) {
        x = linear(x);
        return x;
}

    torch::nn::Linear linear;




































