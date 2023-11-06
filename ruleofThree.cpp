#include <iostream>
#include <cstring>
class RuleOfThreeExample {
private:
    char* data;

public:
    RuleOfThreeExample(const char* str) {
        data = new char[strlen(str) + 1];
        strcpy(data, str);
}

    ~RuleOfThreeExample() {
        delete[] data;
}

    RuleOfThreeExample(const RuleOfThreeExample& other) {
        data = new char[strlen(other.data) + 1];
        strcpy(data, other.data);
}

    RuleOfThreeExample& operator=(const RuleOfThreeExample& other) {
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
    RuleOfThreeExample obj1("Hello");
    RuleOfThreeExample obj2 = obj1;

    obj2.displayData();
    RuleOfThreeExample obj3("World");
    obj3 = obj1;

































