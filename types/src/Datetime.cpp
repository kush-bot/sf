#include "../includes/Datetime.hpp"
#include <sstream>

namespace sf::types {

    Datetime::Datetime(const std::string& datestring) {

       std::string date;
       std::string time;
       std::string token;
       std::stringstream datestring_ss(datestring);
        
       std::getline(datestring_ss,date,' ');
       std::getline(datestring_ss,time,' ');

       std::stringstream date_ss(date);
       std::getline(date_ss,token,'-');
       this->year = std::stoi(token);
       std::getline(date_ss,token,'-');
       this->month = std::stoi(token);
       std::getline(date_ss,token,'-');
       this->day = std::stoi(token);
       std::stringstream time_ss(time);
       std::getline(time_ss,token,':');
       this->hour = std::stoi(token);

       std::getline(time_ss,token,':');
       this->minute = std::stoi(token);

       std::getline(time_ss,token,':');
       this->seconds = std::stoi(token);
    }   
}