#pragma once
#include <iostream>

class Stream
{
public:
    virtual ~Stream() {}
    virtual std::string Read(int number) = 0;   // 将输入数字转为字符串
    virtual char Seek(const std::string& num, int position) = 0;        // 查询字符串中的字符
    virtual void Write(char data) = 0;
};

// 文件系统的读写和查询功能
class FileStream : public Stream
{
public:
    virtual std::string Read(int number)
    {
        std::cout << "FileStream Read..." << std::endl;
        return std::to_string(number);
    }
    virtual char Seek(const std::string& num, int position)
    {
        if (num.empty() || position >= num.size()) return ' ';
        std::cout << "FileStream Seek..." << std::endl;
        return num[position];
    }
    virtual void Write(char data)
    {
        std::cout << "FileStream Write..." << std::endl;
        return;
    }
};

// 网络系统的读写和查询功能
class NetworkStream : public Stream
{
public:
    virtual std::string Read(int number)
    {
        std::cout << "NetworkStream Read..." << std::endl;
        return std::to_string(number);
    }
    virtual char Seek(const std::string& num, int position)
    {
        if (num.empty() || position >= num.size()) return ' ';
        std::cout << "NetworkStream Seek..." << std::endl;
        return num[position];
    }
    virtual void Write(char data)
    {
        std::cout << "NetworkStream Write..." << std::endl;
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

// 扩展操作（加密操作）
class CryptStream : public DecoratorStream
{
public:
    CryptStream(Stream* stream) : DecoratorStream(stream)
    {
        std::cout << "CryptStream construct" << std::endl;
    }

    virtual std::string Read(int number)
    {
        std::cout << "CryptStream Read..." << std::endl;
        // 额外的加密操作...
        int new_num = encryption(number);
        return stream->Read(new_num);
    }
    virtual char Seek(const std::string& num, int position)
    {
        std::cout << "CryptStream Seek..." << std::endl;
        // 额外的加密操作...
        int new_pos = encryption(position);
        return stream->Seek(num, new_pos);
    }

    virtual void Write(char data) override {}

private:
    int encryption(int num)
    {
        return 2 * num;
    }
};