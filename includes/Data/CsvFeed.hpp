#include "Interfaces/Candle.hpp"
#include "Interfaces/IDataFeed.hpp"
#include <fstream>
#include <string>
#include <vector>

namespace sf::Data {

class CSVFEED:public IDataFeed{
  private:
    std::ifstream file_;
    std::string filename_;
    std::vector<sf::Data::Candle> candles;
    void transform();

  public:
    explicit CSVFEED(const std::string& filename);
    bool next(sf::Data::Candle& canle) override;
    bool reset() override;
};

}

