#include "concreteClassA.h"

ConcreteClassA::ConcreteClassA(){
    cout << "A construct." << endl;
}

ConcreteClassA::~ConcreteClassA(){
    cout << "A deconstruct." << endl;
}

void ConcreteClassA::privateOperation1(){
    cout << "A1" << endl;
}

void ConcreteClassA::privateOperation2(){
    cout << "A2" << endl;
}