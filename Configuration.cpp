//
// Created by Matthew Kidd on 4/20/17.
//

#include "Configuration.hpp"

Configuration::Configuration(std::string name, std::vector<std::string> value) :
        KeyValue(name, value)
{}

std::string Configuration::getValueString(std::string name) {
    return (Dictionary<std::string, std::string>::getByKey(name));
}

int Configuration::getValueInt(std::string name) {
    return std::stoi(Dictionary<std::string, std::string>::getByKey(name));
}

double Configuration::getValueDouble(std::string name) {
    return std::stod(Dictionary<std::string, std::string>::getByKey(name));
}

