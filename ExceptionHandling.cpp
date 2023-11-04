#include <iostream>
#include <stdexcept>

class CustomException : public std::exception {
    public:
    const char* what() const noexcept override {
        return "Custom Exception!";
         }
};

int main() {
    try {
        int numerator = 10;
        int denominator = 0;
        if (denominator == 0) {
            throw std::runtime_error("Division by zero");
            }
        int result = numerator / denominator;
        int arr[3] = {1, 2, 3};