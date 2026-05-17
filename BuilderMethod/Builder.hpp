#pragma once

#include <iostream>
#include <memory>
#include <string>

// product
class Product
{
public:
    void setPartA(const std::string& v) { partA = v; }
    void setPartB(const std::string& v) { partB = v; }
    void setPartC(const std::string& v) { partC = v; }

    void show()
    {
        std::cout << partA << " " << partB << " " << partC << std::endl;
    }
private:
    std::string partA;
    std::string partB;
    std::string partC;
};


// builder抽象类
class Builder
{
public:
    virtual ~Builder() = default;
    virtual Builder& buildPartA() = 0;
    virtual Builder& buildPartB() = 0;
    virtual Builder& buildPartC() = 0;
    virtual std::unique_ptr<Product> build() = 0;
};

// concreteBuilder
class ConcreteBuilder : public Builder
{
public:
    ConcreteBuilder()
    {
        reset();
    }

    Builder& buildPartA() override
    {
        product->setPartA("PartA");
        return *this;
    }

    Builder& buildPartB() override
    {
        product->setPartB("PartB");
        return *this;
    }

    Builder& buildPartC() override
    {
        product->setPartC("PartC");
        return *this;
    }

    std::unique_ptr<Product> build() override
    {
        auto result = std::move(product);
        reset();
        return result;
    }

private:
    void reset()
    {
        product = std::make_unique<Product>();
    }

    std::unique_ptr<Product> product;
};

// Director
class Director
{
public:
    void setBuilder(Builder* b)
    {
        builder = b;
    }

    void construct()
    {
        builder->buildPartA();
        builder->buildPartB();
        builder->buildPartC();
    }
private:
    Builder* builder = nullptr;
};