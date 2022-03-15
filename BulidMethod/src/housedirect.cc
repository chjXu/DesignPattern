#include "housedirect.h"

HouseDirector::HouseDirector(HouseBuilder* pHouseBuilder){
    this->pHouseBuilder = pHouseBuilder;
}

HouseDirector::~HouseDirector(){

}

House* HouseDirector::construct(){
    if(pHouseBuilder->buildPart1()){
        pHouseBuilder->buildPart2();
    }

    bool res = pHouseBuilder->buildPart3();
    if(res){
        pHouseBuilder->buildPart4();
    }

    pHouseBuilder->buildPart5();

    return pHouseBuilder->getResults();
}