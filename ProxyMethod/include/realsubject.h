#pragma once

#include "subject.h"

class RealSubject : public ISubject{
public:
    RealSubject();

    virtual ~RealSubject();

    virtual void process();
protected:

private:

};