#ifndef IDATA_FEED_H
#define IDATA_FEED_H


#include "./Candle.hpp"

class IDataFeed{
public:
    virtual ~IDataFeed() = default;
    virtual bool next(sf::Data::Candle& candle)=0;
    virtual bool reset()=0;
}; 


#endif // !IDATA_FEED_H


