#pragma once

#include <string>

namespace sf::types{

class Datetime{
private:
  int year;
  int month;
  int date;
  int hour;
  int minute;
  int seconds;
public:
   Datetime()=default;
   Datetime(std::string& date){
   }
   Datetime(const Datetime&) = default;
   //copy assignment 
   Datetime& operator=(const Datetime&) = default;
};

}
