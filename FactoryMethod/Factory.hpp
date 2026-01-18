#pragma once

#include <iostream>
#include <memory>

// Product 抽象类
class Product
{
public:
    virtual ~Product() = default;
    virtual void doStuff() = 0;  
};

// 具体Product类
class ConcreteProductA : public Product
{
public:
    void doStuff() override{
        std::cout << "ConcreteProdictA doing stuff..." << std::endl;
    }
};
class ConcreteProductB : public Product
{
public:
    void doStuff() override{
        std::cout << "ConcreteProdictB doing stuff..." << std::endl;
    }
};

// Creator 抽象类
class Creator
{
public:
    virtual ~Creator() = default;
    virtual std::unique_ptr<Product> createProduct() = 0; // 工厂方法
    void someOperation()
    {
        auto product = createProduct();
        product->doStuff();
    }
};

// 具体Creator类
class ConcreteCreatorA : public Creator
{
public:
    std::unique_ptr<Product> createProduct() override
    {
        std::cout << "Create ProductA..." << std::endl;
        return std::make_unique<ConcreteProductA>();
    }
};
class ConcreteCreatorB : public Creator
{
public:
    std::unique_ptr<Product> createProduct() override
    {
        std::cout << "Create ProductB..." << std::endl;
        return std::make_unique<ConcreteProductB>();
    }
};