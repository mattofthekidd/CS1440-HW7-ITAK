//
// Created by Matthew Kidd on 4/20/17.
//

#ifndef HW7_SOLID_DESIGN_CONFIGURATION_HPP
#define HW7_SOLID_DESIGN_CONFIGURATION_HPP

#include <string>

#include "KeyValue.hpp"
#include "Dictionary.hpp"

class Configuration : public Dictionary<std::string, std::vector<std::string> > {
public:
    Configuration(std::string name, std::vector<std::string> value);
    std::string getValueString(std::string name);
    int getValueInt(std::string name);
    double getValueDouble(std::string name);
};

/*
 * The run behavior of any Analyzer, like an instance of DenialOfServiceAnalyzer, must be
configurable. A configuration parameter is a key-value pair, where the key is the name of
the parameter and the value is the parameter setting. A Configuration is a set of keyvalue
pairs.
a. A Configuration should be able to hold an arbitrary number of configuration
parameters
b. The name of configuration parameter can be any string.
c. The value of configuration parameter is also a string
d. A Configuration should be able get the value of parameter given its name
i. A Configuration should include a method for returning the value as a
string
ii. A Configuration should include a method for returning the value as an
integer
iii. A Configuration should include a method for returning the value as an
double
 */

#endif //HW7_SOLID_DESIGN_CONFIGURATION_HPP
