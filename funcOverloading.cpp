#include <iostream>

int add(int a, int b) {
    return a + b;
    }
double add(double a, double b) {
 return a + b;
}
std::string add(const std::string& str1, const std::string& str2) {
    return str1 + str2;
}

int main() {
    int result1 = add(5, 7);
    double result2 = add(3.14, 2.71);
    std::string result3 = add("Hello, ", "world!");
    std::cout << "Result of int addition: " << result1 << std::endl;
    std::cout << "Result of double addition: " << result2 << std::endl;
    std::cout << "Result of string concatenation: " << result3 << std::endl;
return 0;
}