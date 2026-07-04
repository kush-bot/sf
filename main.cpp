#include <iostream>
#include "includes/Data/CsvFeed.hpp"

using namespace sf;

int main()
{
  sf::Data::Candle canlde;

  try
  {
    sf::Data::CSVFEED CsvFeed(std::string("../src/Data/relaince.csv"));

    CsvFeed.next(canlde);
  }
  catch (const std::exception &exp)
  {
    std::cout<< exp.what();
  }

  std::cout << canlde.high << canlde.low << canlde.open << canlde.close;
}
