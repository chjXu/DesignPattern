#ifndef PROTOTYPE_HPP
#define PROTOTYPE_HPP

#include <string>
#include <iostream>

// Prototype 是抽象原型，就像一张蓝图，规定了“克隆自己”的能力
class Prototype {
public:
    virtual ~Prototype() = default;

    // 克隆方法，返回新对象指针
    virtual Prototype* clone() const = 0;

    // 一个示例方法，用于展示对象状态
    virtual void show() const = 0;
};


// ConcretePrototype 是实际的原型对象，可以被克隆
class ConcretePrototype : public Prototype {
private:
    std::string name; // 比喻：对象的“灵魂”或个性特征

public:
    ConcretePrototype(const std::string& n) : name(n) {}

    // 克隆方法：制作“对象副本”，像复制雕塑
    Prototype* clone() const override {
        return new ConcretePrototype(*this); // 使用拷贝构造
    }

    void show() const override {
        std::cout << "ConcretePrototype: " << name << std::endl;
    }

    void setName(const std::string& n) { name = n; }
};


// 在实际项目中，原型模式最容易出问题的地方并不是 clone() 的写法，而是：
// 对象内部如果包含动态资源（new出来的内存、文件句柄、Socket连接等），
// 克隆时到底是复制资源本身，还是复制资源地址？
class DeepPrototype : public Prototype
{
private:
    std::string name;
    int* data;
public:
    DeepPrototype(const std::string& n, int value)
    {
        name = n;
        data = new int(value); 
    }

    // 浅拷贝，会导致多个对象共享同一块内存，修改其中一个对象的data会影响其他对象
    // DeepPrototype(const DeepPrototype& other)
    // {
    //     name = other.name;
    //     data = other.data;
    // }

    // 深拷贝，复制资源本身，确保每个对象都有独立的内存
    DeepPrototype(const DeepPrototype& other)
    {
        name = other.name;
        data = new int(*other.data);
    }

    ~DeepPrototype()
    {
        delete data; // 释放内存，防止内存泄漏
    }

    Prototype* clone() const override
    {
        return new DeepPrototype(*this); // 使用深拷贝构造
    }
    void show() const override
    {
        std::cout << "DeepPrototype: " << name << ", data: " << *data << std::endl;
    }
    void setValue(int value)
    {
        *data = value;
    }
};


#endif // PROTOTYPE_HPP