#include <iostream>
#include <cstring>
#include <utility>

class RuleOfFiveExample {
    private:
    char* data;

    public:
    RuleOfFiveExample(const char* str){
        data = new char[std::strlen(str) + 1];
        strcpy(data, str);
    }

    ~RuleOfFiveExample(){
        delete[] data;
    }

    RuleOfFiveExample(const RuleOfFiveExample& other) {
        data = new char[strlen(other.data) + 1];
        strcpy(data, other.data);
}

    RuleOfFiveExample& operator=(const RuleOfFiveExample& other) {
        if (this == &other)
            return *this;
        delete[] data;
        data = new char[strlen(other.data) + 1];
        strcpy(data, other.data);
        return *this;
}
    void displayData() {
        std::cout << "Data: " << data << std::endl;
}


















