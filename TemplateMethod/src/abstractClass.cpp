#include "abstractClass.h"

AbstractClass::AbstractClass(){
    cout << "abs construct." << endl;
}


AbstractClass::~AbstractClass(){
    cout << "abs deconstruct." << endl;
}

void AbstractClass::TemplateMethod(){
    privateOperation1();

    privateOperation2();
}

void AbstractClass::privateOperation1(){
    cout << "abs 1" << endl;
}

void AbstractClass::privateOperation2(){
    cout << "abs 2" << endl;
}