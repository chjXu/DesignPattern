#pragma once

#include "house.h"

class HouseBuilder{
public:
    HouseBuilder();
    virtual ~HouseBuilder();

    virtual House* getResult() = 0;

    virtual void buildPart1() = 0;
    virtual void buildPart2() = 0;
    virtual void buildPart3() = 0;
    virtual void buildPart4() = 0;
    virtual void buildPart5() = 0;
protected:
    // House* pHouse;

    
private:

};