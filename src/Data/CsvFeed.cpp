#include "../../includes/Data/CsvFeed.hpp"
#include <cmath>
#include <ctime>
#include <exception>
#include <sstream>
#include <string>
#include "exception"
#include <iostream>

namespace sf::Data
{

  CSVFEED::CSVFEED(const std::string &file) : file_(file), filename_(file)
  {

    file_.exceptions(std::ios::failbit | std::ios::badbit);
    std::string line;
    if (!file_.is_open())
    {
      throw std::runtime_error("File not found  : " + filename_);
    }

    std::getline(file_, line);
    std::getline(file_, line);
    std::getline(file_, line);
  }

  CSVFEED::~CSVFEED()
  {
    if (file_.is_open())
    {
      file_.close();
    }
  }

  bool CSVFEED::next(sf::Data::Candle &Candle)
  {
    std::string line;

    if (std::getline(file_, line))
    {
      return parseLine(line, Candle);
    }

    return false;
  }

  bool CSVFEED::reset()
  {
    return true;
  }

  bool CSVFEED::parseLine(const std::string &line, sf::Data::Candle &candle){
    size_t start=0;
    size_t end  = line.find(',');
    
    try{
      candle.timestamp = sf::types::Datetime(line.substr(start,end-start));

      start = end+1;
      end = line.find(',',start);
      candle.open = std::stod(line.substr(start,end-start));

      start = end+1;
      end = line.find(',',start);
      candle.high = std::stod(line.substr(start,end-start));

      start=end+1;
      end=line.find(',',start);
      candle.low = std::stod(line.substr(start,end-start));

      start = end+1;
      end = line.find(',',start);
      candle.close = std::stod(line.substr(start,end-start));

      start = end+1;
      end = line.find(',',start);
      candle.volume = std::stod(line.substr(start,end-start));

    }catch(const std::exception& exc){
      std::cout<<"error while parsing line : " <<line<<std::endl;
      return false ;
    }
    return true;

  }
  

} // namespace sf::Data
