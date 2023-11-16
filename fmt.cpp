#include <iostream>
#include <fmt/format.h>

int main() {

    std::cout << fmt::format("Hello, {}!", "world") << std::endl;
    int x = 5;
    double y = 3.14;
    std::string name = "John";

    std::cout << fmt::format("Values: {}, {}, {}", x, y, name) << std::endl;
    std::cout << fmt::sprintf("The answer is %.2f", 42.0) << std::endl;
    std::string result = fmt::format("The result is {}", 123);
    std::cout << "Formatted string: " << result << std::endl;

    return 0;
}













