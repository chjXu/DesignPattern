/**
    职责链模式
 */

#include <string>

// 定义基类
class ChainHanlder
{
public:
    ChainHanlder() : next_handler_(nullptr) {}

    void setNext(ChainHanlder *next)
    {
        this->next_handler_ = next;
    }

    bool Handle(const int num, const std::string word, const double dou)
    {
        if(this->next_handler_ != nullptr)
        {
            return this->next_handler_->Handle(num, word, dou);
        }
    }

private:
    ChainHanlder* next_handler_;
};

// 定义处理int类
class IntHandler : public ChainHanlder
{
public:
    bool Handle(const int num, const std::string word, const double dou) override
    {
        if(num == 0)
        {
            return true;
        }
        else
        {
            return AbstractHandler::Handle(num, word, dou);
        }
    }
}

// 定义string类
class StringHandler : public AbstractHandler
{
public:
    bool Handle(const int num, const std::string word, const double dou) override
    {
        if(word == "A")
        {
            return true;
        }
        else
        {
            return AbstractHandler::Handle(num, word, dou);
        }
    }
};

// 定义double类
class DoubleHandler : public AbstractHandler
{
public:
    bool Handle(const int num, const std::string word, const double dou) override
    {
        if(dou == "1.0")    
        {
            return true;
        }
        else
        {
            return AbstractHandler::Handle(num, word, dou);
        }
    }
};