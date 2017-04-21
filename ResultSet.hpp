//
// Created by Matthew Kidd on 4/21/17.
//

#ifndef HW7_SOLID_DESIGN_RESULTSET_HPP
#define HW7_SOLID_DESIGN_RESULTSET_HPP

#include <iostream>

class ResultSet {
public:
    void print(std::ostream& out);
};

/*
 * a. ResultSet should include a print method that accepts an ostream reference and
prints out each key, and then each string in the container (value) for the key.
The format should be readable, but is otherwise not constrained.
b. The ResultSet produced by an instance of DenialOfServiceAnalyzer will contain at
least the following key-value pairs:
Key: “Likely attackers”
Value: a container of strings that represent each likely attacker’s source

Key: “Possible attackers”
Value: a container of strings that represent possible attacker’s source

Key: “Attack Periods”
Value: a container of strings, with strings for each likely or possible

attack format as <start time>-<end time>
Key: “Timeframe”
Value: a container of string with one string that represents of the
timeframe
 */

#endif //HW7_SOLID_DESIGN_RESULTSET_HPP
