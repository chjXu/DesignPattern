/**
 * 桥模式
 */

#pragma once

class Abstract{
public:
    virtual ~Abstract()
    {
        std::cout << "Abstract Deconstruct..." << std::endl;
    }

    virtual void showName() = 0;
public:
    Abstract()
    {
        std::cout << "Abstract Construct..." << std::endl;
    }
private:
};


class AbstractionImplement{
public:
    virtual void showName() = 0;    //定义操作接口
    virtual ~AbstractionImplement()
    {
        std::cout << "AbstractionImplement Deconstruct..." << std::endl;
    }
protected:
    AbstractionImplement()
    {
        std::cout << "AbstractionImplement Construct..." << std::endl;
    }
};


class RefineAbstractA : public Abstract{
public:
    RefineAbstractA(AbstractionImplement *imp) : _imp(imp)
    {
        std::cout << "RefineAbstractA Construct..." << std::endl;
    }

    virtual ~RefineAbstractA()
    {
        std::cout << "RefineAbstractA Deconstruct..." << std::endl;
        delete this->_imp;
        this->_imp = nullptr;
    }

    virtual void showName()
    {
        _imp->showName();
    }
protected:
private:
    AbstractionImplement *_imp;
};


class RefineAbstractB : public Abstract{
public:
    RefineAbstractB(AbstractionImplement *imp) : _imp(imp)
    {
        std::cout << "RefineAbstractB Construct..." << std::endl;
    }

    virtual ~RefineAbstractB()
    {
        std::cout << "RefineAbstractB Deconstruct..." << std::endl;
        delete this->_imp;
        this->_imp = nullptr;
    }

    virtual void showName()
    {
        _imp->showName();
    }
protected:
private:
    AbstractionImplement *_imp;
};


class ConcreteAbstractionImplementA : public AbstractionImplement{
public:
    ConcreteAbstractionImplementA()
    {
        std::cout << "ConcreteAbstractionImplementA Construct..." << std::endl;
    }

    ~ConcreteAbstractionImplementA()
    {
        std::cout << "ConcreteAbstractionImplementA Deconstruct..." << std::endl;
    }

    void showName()
    {
        std::cout << "ConcreteAbstractionImplementA name..." << std::endl;
    }
protected:
private:
};


class ConcreteAbstractionImplementB : public AbstractionImplement{
public:
    ConcreteAbstractionImplementB()
    {
        std::cout << "ConcreteAbstractionImplementB Construct..." << std::endl;
    }

    ~ConcreteAbstractionImplementB()
    {
        std::cout << "ConcreteAbstractionImplementB Deconstruct..." << std::endl;
    }

    void showName()
    {
        std::cout << "ConcreteAbstractionImplementB name..." << std::endl;
    }
protected:
private:
};

