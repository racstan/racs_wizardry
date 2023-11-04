#include <iostream>
#include <stdexcept>

class CustomException : public std::exception {
    public:
    const char* what() const noexcept override {
        return "Custom Exception!";
         }
};