#pragma once
#include <iostream>
#include "abstractClass.h"

using namespace std;

class ConcreteClassA : public AbstractClass{
public:

    ConcreteClassA();


protected:
    ~ConcreteClassA();

    virtual void privateOperation1() override;

    virtual void privateOperation2() override;

private:


};