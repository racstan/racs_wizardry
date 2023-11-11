#include <iostream>
#include <vector>

class ResourceManager {
public:
    ResourceManager() {
        std::cout << "Resource acquired." << std::endl;
}

    ~ResourceManager() {
        std::cout << "Resource released." << std::endl;
}

    void performTask() {
        std::cout << "Task performed using the resource." << std::endl;
}
};
void useResource() {
    ResourceManager resource;
    resource.performTask();
}

int main() {
useResource();
return 0;
}



