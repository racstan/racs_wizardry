#include <iostream>
#include <cstring>
class RuleOfThreeExample {
private:
    char* data;

public:
    RuleOfThreeExample(const char* str) {
        data = new char[strlen(str) + 1];
        strcpy(data, str);

































