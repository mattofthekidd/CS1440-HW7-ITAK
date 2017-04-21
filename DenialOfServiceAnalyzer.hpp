//
// Created by Matthew Kidd on 4/21/17.
//

#ifndef HW7_SOLID_DESIGN_DENIALOFSERVICEANALYZER_HPP
#define HW7_SOLID_DESIGN_DENIALOFSERVICEANALYZER_HPP


#include "Analyzer.hpp"

class DenialOfServiceAnalyzer : protected Analyzer {
public:
    DenialOfServiceAnalyzer(std::string name, std::vector<std::string> values);;
    ResultSet run(std::istream& input);
private:
};


/*
 * A DenialOfServiceAnalyzer object should only accept Configuration objects that include,
as a minimum, parameters with the following name: “Timeframe”, “Likely Attack
Message Count”, “Possible Attack Message Count”. See the algorithm in Appendix A to
understand how the values of these parameters are used.
 */

#endif //HW7_SOLID_DESIGN_DENIALOFSERVICEANALYZER_HPP
