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
        int index = 4;
         if (index < 0 || index >= 3) {
            throw std::out_of_range("Index out of bounds");
             }
        int element = arr[index];
        throw CustomException();
         } catch (const std::runtime_error& e) {
            std::cerr << "Caught runtime_error: " << e.what() << std::endl;
            } catch (const std::out_of_range& e) {
                 std::cerr << "Caught out_of_range: " << e.what() << std::endl;
                     } catch (const CustomException& e) {
        std::cerr << "Caught CustomException: " << e.what() << std::endl;
    } catch (const std::exception& e) {
