#include "concreteStrategyB.h"

ConcreteStrategyB::ConcreteStrategyB(){
    cout << "B construct." << endl;
}

ConcreteStrategyB::~ConcreteStrategyB(){
    cout << "B deconstruct." << endl;
}

void ConcreteStrategyB::algorithmInterface(){
    cout << "B1" << endl;
}