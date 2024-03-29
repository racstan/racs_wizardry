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
};
int main() {
    RuleOfFiveExample obj1("Hello");
    RuleOfFiveExample obj2 = obj1;

    obj2.displayData();
    RuleOfFiveExample obj3("World");
    obj3 = obj1;

    obj3.displayData();
    RuleOfFiveExample obj4("Move");
RuleOfFiveExample obj5 = std::move(obj4);

obj5.displayData();
RuleOfFiveExample obj6("Transfer");
obj6 = std::move(obj5);

    obj6.displayData();

    return 0;
}





