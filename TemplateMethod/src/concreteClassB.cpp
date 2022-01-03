#include "concreteClassB.h"

ConcreteClassB::ConcreteClassB(){
    cout << "B construct." << endl;
}

ConcreteClassB::~ConcreteClassB(){
    cout << "B deconstruct." << endl;
}

void ConcreteClassB::privateOperation1(){
    cout << "B1" << endl;
}

void ConcreteClassB::privateOperation2(){
    cout << "B2" << endl;
}