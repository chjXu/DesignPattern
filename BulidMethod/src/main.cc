#include "housebuilder.h"
#include "stonehousebuilder.h"
#include "housedirect.h"


int main(){
    HouseBuilder* housebuilder = new StoneHouseBuilder();
    HouseDirector* pHousedirector = new HouseDirector(housebuilder);

    StoneHouse* st_house = pHousedirector->construct();

    delete housebuilder;
    delete pHousedirector;
    delete st_house;

    return 0;
}