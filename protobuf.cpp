#include <iostream>
#include <fstream>
#include "example.pb.h"

int main() {

    tutorial::Person person;
    person.set_name("John Doe");
    person.set_id(123);
    person.add_emails("john.doe@example.com");

    person.add_emails("john@example.com");

    std::string serialized_data;
    person.SerializeToString(&serialized_data);

    std::cout << "Serialized Data: " << serialized_data << std::endl;

    tutorial::Person parsed_person;
    parsed_person.ParseFromString(serialized_data);

    std::cout << "Parsed Person:" << std::endl;

    std::cout << "Name: " << parsed_person.name() << std::endl;

    std::cout << "ID: " << parsed_person.id() << std::endl;

    for (const auto& email : parsed_person.emails()) {
        std::cout << "Email: " << email << std::endl;
}









