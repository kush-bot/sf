#include "../../includes/Data/CsvFeed.hpp"
#include <cmath>
#include <exception>
#include <string>
#include "exception"
#include <iostream>

namespace sf::Data {

CSVFEED::CSVFEED(const std::string& file):file_(file),filename_(file){
  transform();
}

bool CSVFEED::next(sf::Data::Candle& Candle){
        return true;      
}

void CSVFEED::transform(){
  std::string line;

  try{
      if(!file_.is_open()){
        std::cout<<"File name "<<filename_;
       throw std::runtime_error("file not found : " + filename_);
      }
      
      while(std::getline(file_,line)){
        std::cout<<line<<std::endl;
      }



  }catch(const std::exception& e){
    std::cout << e.what();
  }
}

bool CSVFEED::reset(){
  return true;
}

} // namespace sf::Data





