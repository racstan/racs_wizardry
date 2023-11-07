#include <iostream>
#include <vector>

int main(){
    std::vector<int> numbers;
    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);
    for (const int& num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
















}