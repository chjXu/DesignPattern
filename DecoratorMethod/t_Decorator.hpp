#pragma once

#include <iostream>
#include <string>

template<typename T>
class TStream
{
public:
    virtual ~TStream() {}
    virtual char Read(int number) = 0;
    virtual void Seek(int position) = 0;
    virtual void Write(char data) = 0;
};


template<typename T>
class TConcreteStream : public TStream<T>
{
public:
    TConcreteStream(const std::string& name) : m_name(name) {}

    virtual char Read(int number)
    {
        std::cout << m_name + " Read..." << std::endl;
        return '0';
    }
    virtual void Seek(int position)
    {
        std::cout << m_name + " Seek..." << std::endl;
    }
    virtual void Write(char data)
    {
        std::cout << m_name + " Write..." << std::endl;
    }

private:
    std::string m_name;
};


// 装饰者
template<typename T>
class TDecoratorStream : public TStream<T>
{
public:
    TDecoratorStream(TStream<T>* stream) : stream(stream)
    {
        std::cout << "TDecoratorStream construct" << std::endl;
    }

    TStream<T>* stream;
};


// 扩展操作
template<typename T>
class TCryptStream : public TDecoratorStream<T>
{
public:
    TCryptStream(TStream<T>* stream) : TDecoratorStream<T>(stream)
    {
        std::cout << "TCryptStream construct" << std::endl;
    }

    virtual char Read(int number)
    {
        std::cout << "TCryptStream Read..." << std::endl;
        // 额外的加密操作...
        std::cout << "Other operator in read..." << std::endl;
        this->stream->Read(number);
        // 额外的加密操作...
        return '0';
    }
    virtual void Seek(int position)
    {
        std::cout << "TCryptStream Seek..." << std::endl;
        // 额外的加密操作...
        std::cout << "Other operator in seek..." << std::endl;
        this->stream->Seek(position);
        // 额外的加密操作...
    }
    virtual void Write(char data)
    {
        std::cout << "TCryptStream Write..." << std::endl;
        // 额外的加密操作...
        std::cout << "Other operator in write..." << std::endl;
        this->stream->Write(data);
        // 额外的加密操作...
    }
};