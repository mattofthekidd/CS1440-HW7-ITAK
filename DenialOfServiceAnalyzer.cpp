//
// Created by Matthew Kidd on 4/21/17.
//

#include "DenialOfServiceAnalyzer.hpp"
#include "Dictionary.hpp"

//<timestamp>, <src address>, <src port>, <des port>

DenialOfServiceAnalyzer::DenialOfServiceAnalyzer(std::string name, std::vector<std::string> values) :
        Analyzer(name, values)
{}

ResultSet DenialOfServiceAnalyzer::run(std::istream &input) {
    //<src IP, <timestamp, counter> >

    Dictionary<double, int> timestampToCount;
    Dictionary<std::string, Dictionary<double, int> > addressToSummary();
    return ResultSet();
}
