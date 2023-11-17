#include <iostream>
#include <vector>
#include <range/v3/all.hpp>

int main() {

    std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    auto even_numbers = numbers | ranges::view::filter([](int x) { return x % 2 == 0; });
    auto squared_numbers = numbers | ranges::view::transform([](int x) { return x * x; });

    std::cout << "Even numbers: ";
    ranges::for_each(even_numbers, [](int x) { std::cout << x << " "; });
    std::cout << std::endl;

    std::cout << "Squared numbers: ";
    ranges::for_each(squared_numbers, [](int x) { std::cout << x << " "; });
    std::cout << std::endl;

    return 0;











