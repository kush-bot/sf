#include "Interfaces/Candle.hpp"
#include "Interfaces/IDataFeed.hpp"
#include <fstream>
#include <string>


namespace sf::Data {

class CSVFEED:public IDataFeed{
  private:
    std::ifstream file_;
    std::string filename_;
    bool parseLine(const std::string& line, sf::Data::Candle& candle);
  
  public:
    explicit CSVFEED(const std::string& filename);
    bool next(sf::Data::Candle& canle) override;
    bool reset() override;
    ~CSVFEED() override;
};

}

