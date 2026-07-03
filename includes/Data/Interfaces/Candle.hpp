#pragma once

#include <string>
#include "../../../types/includes/Datetime.hpp"
#include <string>

namespace sf::Data {    
  struct Candle{
    std::string symbol;
    double open;
    double high;
    double low;
    double close;
    double volume;
    types::Datetime timestamp;  
  };

}
