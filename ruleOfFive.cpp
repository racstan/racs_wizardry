#include <iostream>
#include <cstring>
#include <utility>

class RuleOfFiveExample {
    private:
    char* data;

    public:
    RuleOfFiveExample(const char* str){
        data = new char[std::strlen(str) + 1];
    }