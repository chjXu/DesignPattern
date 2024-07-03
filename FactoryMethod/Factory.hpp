#pragma once

#include <iostream>

// 抽象基类，
class ISplitter
{
private:
    /* data */
public:
    ISplitter()
    {
        std::cout << "ISplitter Construct..." << std::endl;
    }

    virtual ~ISplitter()
    {
        std::cout << "ISplitter Deconstruct..." << std::endl;
    }

    virtual void split() = 0; // 抽象方法
};


class SplitterFactory
{
private:
    /* data */
public:
    SplitterFactory(/* args */)
    {
        std::cout << "SplitterFactory Construct..." << std::endl;
    }

    virtual ~SplitterFactory()
    {
        std::cout << "SplitterFactory Deconstruct..." << std::endl;
    }

    virtual ISplitter *createSplitter() = 0;
};


class BinarySplitter : public ISplitter
{
private:
    /* data */
public:
    BinarySplitter(/* args */)
    {
        std::cout << "BinarySplitter Construct..." << std::endl;
    }

    ~BinarySplitter()
    {
        std::cout << "BinarySplitter Deconstruct..." << std::endl;
    }

    virtual void split()
    {
        std::cout << "BinarySplitter is working..." << std::endl;
    }
};


class BinarySplitterFactory : public SplitterFactory
{
private:
    /* data */
public:
    BinarySplitterFactory(/* args */)
    {
        std::cout << "BinarySplitterFactory Construct..." << std::endl;
    }

    ~BinarySplitterFactory()
    {
        std::cout << "BinarySplitterFactory Deconstruct..." << std::endl;
    }

    virtual ISplitter* createSplitter()
    {
        return new BinarySplitter();
    }
};


class PictureSplitter : public ISplitter
{
private:
    /* data */
public:
    PictureSplitter(/* args */)
    {
        std::cout << "PictureSplitter Construct..." << std::endl;
    }

    ~PictureSplitter()
    {
        std::cout << "PictureSplitter Deconstruct..." << std::endl;
    }

    virtual void split()
    {
        std::cout << "PictureSplitter is working..." << std::endl;
    }
};


class PictureSplitterFactory : public SplitterFactory
{
private:
    /* data */
public:
    PictureSplitterFactory(/* args */)
    {
        std::cout << "PictureSplitterFactory Construct..." << std::endl;
    }

    ~PictureSplitterFactory()
    {
        std::cout << "PictureSplitterFactory Deconstruct..." << std::endl;
    }

    virtual ISplitter* createSplitter()
    {
        return new PictureSplitter();
    }
};


class TxtSplitter : public ISplitter
{
private:
    /* data */
public:
    TxtSplitter(/* args */)
    {
        std::cout << "TxtSplitter Construct..." << std::endl;
    }

    ~TxtSplitter()
    {
        std::cout << "TxtSplitter Deconstruct..." << std::endl;
    }

    virtual void split()
    {
        std::cout << "TxtSplitter is working..." << std::endl;
    }
};


class TxtSplitterFactory : public SplitterFactory
{
private:
    /* data */
public:
    TxtSplitterFactory(/* args */)
    {
        std::cout << "TxtSplitterFactory Construct..." << std::endl;
    }

    ~TxtSplitterFactory()
    {
        std::cout << "TxtSplitterFactory Deconstruct..." << std::endl;
    }

    virtual ISplitter* createSplitter()
    {
        return new TxtSplitter();
    }
};