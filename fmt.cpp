#include <iostream>
#include <fmt/format.h>

int main() {

    std::cout << fmt::format("Hello, {}!", "world") << std::endl;
    int x = 5;
    double y = 3.14;
    std::string name = "John";

    std::cout << fmt::format("Values: {}, {}, {}", x, y, name) << std::endl;

















