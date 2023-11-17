#include <iostream>
#include <vector>
#include <range/v3/all.hpp>

int main() {

    std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    auto even_numbers = numbers | ranges::view::filter([](int x) { return x % 2 == 0; });
    auto squared_numbers = numbers | ranges::view::transform([](int x) { return x * x; });














