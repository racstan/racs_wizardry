#include <iostream>
#include <string>

struct Person{
    std::string name;
    int age;
}

int main() {
    Person person1;
     person1.name = "John";
     person1.age =20;

     Person person2={"Jane",21};