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



