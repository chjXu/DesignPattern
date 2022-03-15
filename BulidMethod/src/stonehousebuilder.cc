#include "stonehousebuilder.h"
#include <iostream>

StoneHouseBuilder::StoneHouseBuilder(){

}

StoneHouseBuilder::~StoneHouseBuilder(){

}

void StoneHouseBuilder::buildPart1(){
    std::cout << "build stone part 1..." << std::endl;
}

void StoneHouseBuilder::buildPart2(){
    std::cout << "build stone part 2..." << std::endl;
}

void StoneHouseBuilder::buildPart3(){
    std::cout << "build stone part 3..." << std::endl;
}

void StoneHouseBuilder::buildPart4(){
    std::cout << "build stone part 4..." << std::endl;
}

void StoneHouseBuilder::buildPart5(){
    std::cout << "build stone part 5..." << std::endl;
}

House* StoneHouseBuilder::getResult(){
    return new StoneHouse();
}