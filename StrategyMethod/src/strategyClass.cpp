#include "strategyClass.h"

StrategyClass::StrategyClass(){
    cout << "abs construct." << endl;
}


StrategyClass::~StrategyClass(){
    cout << "abs deconstruct." << endl;
}

void StrategyClass::algorithmInterface(){
    cout << "abs algorithm." << endl;
}
