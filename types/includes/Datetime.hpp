#pragma once

#include <string>

namespace sf::types {

class Datetime {
private:
    int year = 0;
    int month = 0;
    int day = 0;
    int hour = 0;
    int minute = 0;
    int seconds = 0;

public:
    Datetime() = default;
    explicit Datetime(const std::string& datestring);
    Datetime(const Datetime&) = default;
    
    // copy assignment 
    Datetime& operator=(const Datetime&) = default;
};

} // namespace sf::types
