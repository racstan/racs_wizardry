#include <iostream>
#include <boost/version.hpp>
#include <boost/algorithm/string.hpp>

int main() {

    std::cout << "Boost version: " << BOOST_LIB_VERSION << std::endl;

    std::string input = "Hello, Boost C++ Libraries!";
    std::vector<std::string> words;

    boost::split(words, input, boost::is_any_of(" "));




















