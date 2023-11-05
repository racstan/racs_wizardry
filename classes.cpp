#include <iostream>
#include <string>

class Person {
    public:
        Person(const std::string& name, int age) : name(name), age(age) {}

        void setAge(int newAge){
            age = newAge;
        }

        int getAge() const {
            return age;
        }

        static int count;

        static int getCount(){
            return count;
        }
        private:
    std::string name;
    int age;
    void privateFunction() {
        std::cout << "This is a private function." << std::endl;
    }
    static const int maxAge = 100;
