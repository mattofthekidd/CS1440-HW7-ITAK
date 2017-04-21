//
// Created by Matthew Kidd on 4/20/17.
//

#ifndef HW7_SOLID_DESIGN_ANALYZER_HPP
#define HW7_SOLID_DESIGN_ANALYZER_HPP

#include <iostream>
#include <string>
#include <vector>
#include "ResultSet.hpp"
#include "Configuration.hpp"

class Analyzer {
public:

    //name of config item, value of config item

    Analyzer(std::string name, std::vector<std::string> values) :
            m_name(name),
            m_values(values)
            {};
    virtual ResultSet run(std::istream& input) = 0;
protected:
    Configuration m_config;
    std::string m_name;
    std::vector<std::string> m_values;
};

/*
 This component must include either a constructor or “set” method(s) for setting
configuration parameters that will tune the algorithm. See Requirement 4 for
more details on configuration parameters
 */

/*
 A configuration parameter is a key-value pair, where the
 key is the name of the parameter and the
 value is the parameter setting.
 A Configuration is a set of keyvalue pairs.
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

#endif //HW7_SOLID_DESIGN_ANALYZER_HPP
