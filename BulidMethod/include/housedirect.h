#pragma once

#include "housebuilder.h"

class HouseDirector{
public:
    HouseDirector(HouseBuilder* pHouseBuilder);
    virtual ~HouseDirector();

    House* construct();

protected:

private:
    HouseBuilder* pHouseBuilder;
};