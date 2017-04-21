//
// Created by Matthew Kidd on 4/20/17.
//

#ifndef HW7_SOLID_DESIGN_RECORD_HPP
#define HW7_SOLID_DESIGN_RECORD_HPP

#include <fstream>
#include <string>

template <typename I>
class Record {
public:
    Record(I& fin);
private:
    long m_timestamp;
    std::string m_srcAddress;
    std::string m_srcPort;
    std::string m_desPort;

};

template <typename I>
Record<I>::Record(I& in) {
    in >> m_timestamp;
    in.ignore(',');
    std::getline(in, m_srcAddress, ',');
    std::getline(in, m_srcPort, ',');
    std::getline(in, m_desPort);
}

#endif //HW7_SOLID_DESIGN_RECORD_HPP
