#pragma once
#include <iostream>

class Stream
{
public:
    virtual ~Stream() {}
    virtual char Read(int number) = 0;
    virtual void Seek(int position) = 0;
    virtual void Write(char data) = 0;
};


class FileStream : public Stream
{
public:
    virtual char Read(int number)
    {
        std::cout << "FileStream Read..." << std::endl;
        return '0';
    }
    virtual void Seek(int position)
    {
        std::cout << "FileStream Seek..." << std::endl;
    }
    virtual void Write(char data)
    {
        std::cout << "FileStream Write..." << std::endl;
    }
};


class NetworkStream : public Stream
{
public:
    virtual char Read(int number)
    {
        std::cout << "NetworkStream Read..." << std::endl;
        return '0';
    }
    virtual void Seek(int position)
    {
        std::cout << "NetworkStream Seek..." << std::endl;
    }
    virtual void Write(char data)
    {
        std::cout << "NetworkStream Write..." << std::endl;
    }
};


class MemoryStream : public Stream
{
public:
    virtual char Read(int number)
    {
        std::cout << "MemoryStream Read..." << std::endl;
        return '0';
    }
    virtual void Seek(int position)
    {
        std::cout << "MemoryStream Seek..." << std::endl;
    }
    virtual void Write(char data)
    {
        std::cout << "MemoryStream Write..." << std::endl;
    }
};

// 装饰者
class DecoratorStream : public Stream
{
public:
    DecoratorStream(Stream* stream) : stream(stream)
    {
        std::cout << "DecoratorStream construct" << std::endl;
    }

    Stream* stream;
};

// 扩展操作
class CryptStream : public DecoratorStream
{
public:
    CryptStream(Stream* stream) : DecoratorStream(stream)
    {
        std::cout << "CryptStream construct" << std::endl;
    }

    virtual char Read(int number)
    {
        std::cout << "CryptStream Read..." << std::endl;
        // 额外的加密操作...
        stream->Read(number);
        // 额外的加密操作...
        return '0';
    }
    virtual void Seek(int position)
    {
        std::cout << "CryptStream Seek..." << std::endl;
        // 额外的加密操作...
        stream->Seek(position);
        // 额外的加密操作...
    }
    virtual void Write(char data)
    {
        std::cout << "CryptStream Write..." << std::endl;
        // 额外的加密操作...
        stream->Write(data);
        // 额外的加密操作...
    }
};

// 其它扩展操作