#include <iostream>
#include <vector>
#include <CL/cl.hpp>

int main() {

    std::vector<cl::Platform> platforms;
    cl::Platform::get(&platforms);

    if (platforms.empty()) {
        std::cerr << "No OpenCL platforms found." << std::endl;
        return 1;
}

    cl::Device device = devices[0];
    std::cout << "Using device: " << device.getInfo<CL_DEVICE_NAME>() << std::endl;
    cl::Context context({device});
    cl::CommandQueue queue(context, device);

    const char* sourceCode = R"(
        __kernel void add(__global int* a, __global int* b, __global int* result) {
            int index = get_global_id(0);
            result[index] = a[index] + b[index];
 }
 )";
    cl::Program program(context, sourceCode);
    program.build({device});










