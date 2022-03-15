#pragma once

#include "stoneHouse.h"
#include "housebuilder.h"

class StoneHouseBuilder : public HouseBuilder{
public:
    StoneHouseBuilder();
    virtual ~StoneHouseBuilder();

    virtual House* getResult();
protected:
    virtual void buildPart1();
    virtual void buildPart2();
    virtual void buildPart3();
    virtual void buildPart4();
    virtual void buildPart5();
private:

};