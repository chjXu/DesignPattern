#include "concreteStrategyA.h"

ConcreteStrategyA::ConcreteStrategyA(){
    cout << "A construct." << endl;
}

ConcreteStrategyA::~ConcreteStrategyA(){
    cout << "A deconstruct." << endl;
}

void ConcreteStrategyA::algorithmInterface(){
    cout << "A1" << endl;
}