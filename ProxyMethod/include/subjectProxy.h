#pragma once

#include "subject.h"
#include "realsubject.h"

// Proxy的设计，看视简单，在实践的过程中往往会很复杂
class SubjectProxy : public ISubject{
public:
    SubjectProxy();

    virtual ~SubjectProxy();

    virtual void process(); // 对realSubject的一种间接访问
protected:

private:
}