cmake_minimum_required(VERSION 3.7)
project(HW7_SOLID_Design)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp
        Dictionary.hpp KeyValue.hpp
        Analyzer.cpp Analyzer.hpp
        Record.hpp
        Configuration.cpp Configuration.hpp
        Utils.cpp Utils.h DenialOfServiceAnalyzer.cpp DenialOfServiceAnalyzer.hpp ResultSet.cpp ResultSet.hpp)
add_executable(HW7_SOLID_Design ${SOURCE_FILES})