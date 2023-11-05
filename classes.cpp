#include <iostream>
#include <string>

class Person {
    public:
        Person(const std::string& name, int age) : name(name), age(age) {}

        void setAge(int newAge){
            age = newAge;
        }