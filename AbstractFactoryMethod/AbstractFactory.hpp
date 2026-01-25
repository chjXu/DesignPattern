#pragma once

#include <memory>
#include <iostream>

// 抽象产品
class AbstractProductA {
public:
    virtual ~AbstractProductA() = default;
    virtual void use() const = 0;
};

class AbstractProductB {
public:
    virtual ~AbstractProductB() = default;
    virtual void use() const = 0;
};  


// 具体产品
class ConcreteProductA1 : public AbstractProductA {
public:
    void use() const override {
        std::cout << "Using ConcreteProductA1" << std::endl;
    }
};

class ConcreteProductB1 : public AbstractProductB {
public:
    void use() const override {
        std::cout << "Using ConcreteProductB1" << std::endl;
    }
};

class ConcreteProductA2 : public AbstractProductA {
public:
    void use() const override {
        std::cout << "Using ConcreteProductA2" << std::endl;
    }
};

class ConcreteProductB2 : public AbstractProductB {
public:
    void use() const override {
        std::cout << "Using ConcreteProductB2" << std::endl;
    }
};

// 抽象工厂
class AbstractFactory {
public:
    virtual ~AbstractFactory() = default;
    virtual std::unique_ptr<AbstractProductA> createProductA() const = 0;
    virtual std::unique_ptr<AbstractProductB> createProductB() const = 0;
};

// 具体工厂
class ConcreteFactory1 : public AbstractFactory {
public:
    std::unique_ptr<AbstractProductA> createProductA() const override {
        return std::make_unique<ConcreteProductA1>();
    }

    std::unique_ptr<AbstractProductB> createProductB() const override {
        return std::make_unique<ConcreteProductB1>();
    }
};

class ConcreteFactory2 : public AbstractFactory {
public:
    std::unique_ptr<AbstractProductA> createProductA() const override {
        return std::make_unique<ConcreteProductA2>();
    }

    std::unique_ptr<AbstractProductB> createProductB() const override {
        return std::make_unique<ConcreteProductB2>();
    }
};
