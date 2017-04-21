#include <iostream>
#include <fstream>
#include <memory>
#include <string>
#include <sstream>
#include "Dictionary.hpp"
#include "Record.hpp"
#include "DenialOfServiceAnalyzer.hpp"

int main() {
    //<timestamp>, <src address>, <src port>, <des port>
    std::ifstream fin;
    fin.open("SampleData.csv");
    std::istream& in = fin;

    DenialOfServiceAnalyzer()

    std::cout << "Hello, World!" << std::endl;
    return 0;
}