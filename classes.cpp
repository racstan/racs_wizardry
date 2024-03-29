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
        int Person::count = 0;
        
int main() {
    Person person1("John", 30);
    Person person2("Alice", 25);
    std::cout << "Person 1: " << person1.getAge() << " years old." << std::endl;
    std::cout << "Person 2: " << person2.getAge() << " years old." << std::endl;
    person1.setAge(35);
    std::cout << "Updated age of Person 1: " << person1.getAge() << " years old." << std::endl;
    std::cout << "Total number of persons: " << Person::getCount() << std::endl;
    return 0;
}