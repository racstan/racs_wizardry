#include <iostream>
#include <vector>
#include <CL/cl.hpp>

int main() {

    std::vector<cl::Platform> platforms;
    cl::Platform::get(&platforms);

    if (platforms.empty()) {













