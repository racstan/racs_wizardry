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
         std::cout << "Person 1: " << person1.name << ", " << person1.age << " years old." << std::endl;
