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
};

int main() {
    torch::manual_seed(1);
    torch::Tensor x_train = torch::randn({1000, 1});
    torch::Tensor y_train = 2 * x_train + 1 + 0.1 * torch::randn_like(x_train);

    Net model;
    torch::nn::MSELoss loss_fn;
    torch::optim::SGD optimizer(model.parameters(), /*lr=*/0.01);

    for (int epoch = 0; epoch < 100; ++epoch) {

        torch::Tensor y_pred = model(x_train);
        torch::Tensor loss = loss_fn(y_pred, y_train);

        optimizer.zero_grad();
        loss.backward();
        optimizer.step();

        if (epoch % 10 == 0) {
            std::cout << "Epoch: " << epoch << ", Loss: " << loss.item<float>() << std::endl;
        }
}
    torch::Tensor x_test = torch::tensor({1.0});
    torch::Tensor y_pred = model(x_test);
    std::cout << "Prediction for x=1.0: " << y_pred.item<float>() << std::endl;
    return 0;
}




























