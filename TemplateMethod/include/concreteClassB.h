#pragma once
#include <iostream>
#include "abstractClass.h"

using namespace std;

class ConcreteClassB : public AbstractClass{
public:

    ConcreteClassB();

    ~ConcreteClassB();

protected:

    virtual void privateOperation1() override;

    virtual void privateOperation2() override;

private:


};