#pragma once

// 抽象基类，

class ISplitter
{
private:
    /* data */
public:
    ISplitter();
    virtual ISplitter *clone() = 0;
    
    virtual ~ISplitter();

    virtual void split() = 0; // 抽象方法
};