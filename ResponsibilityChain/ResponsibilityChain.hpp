/**
    职责链模式
    这里编写了一个测试代码
    假设用来处理一个请求，通过 链 的方式来判断该请求是否能够处理，如不能处理传送到下一个节点，如能处理，程序提前结束；
 */

#include <iostream>
#include <string>

enum Request
{
    Request1,
    Request2,
    Request3
};

class RequestClient
{
public:
    RequestClient(const Request& req) : req(req) {}
    Request getReq() const { return this->req; }
private:
    Request req;
};

// 定义基类
class Handler
{
public:
    virtual Handler* setNext(Handler *handler) = 0;
    virtual bool Handle(const RequestClient& req) = 0;
};


class AbstractHandler : public Handler
{
public:
    AbstractHandler() : next_handler_(nullptr) {}

    Handler* setNext(Handler *handler)
    {
        this->next_handler_ = handler;
        return this;
    }

    bool Handle(const RequestClient& req) override
    {
        if(this->next_handler_ != nullptr)
        {
            return this->next_handler_->Handle(req);
        }
        return false;
    }

private:
    Handler* next_handler_; // 核心指针
};

// RequestHandler1
class RequestHandler1 : public AbstractHandler
{
public:
    bool Handle(const RequestClient& req) override
    {
        if(req.getReq() == Request::Request1)
        {
            std::cout << "RequestHandler1 处理 OK" << std::endl;
            return true;
        }
        else
        {
            std::cout << "RequestHandler1 无法处理,传入下一个" << std::endl;
            return AbstractHandler::Handle(req);
        }
    }
};

// RequestHandler2
class RequestHandler2 : public AbstractHandler
{
public:
    bool Handle(const RequestClient& req) override
    {
        if(req.getReq() == Request::Request2)
        {
            std::cout << "RequestHandler2 处理 OK" << std::endl;
            return true;
        }
        else
        {
            std::cout << "RequestHandler2 无法处理,传入下一个" << std::endl;
            return AbstractHandler::Handle(req);
        }
    }
};

// RequestHandler3
class RequestHandler3 : public AbstractHandler
{
public:
    bool Handle(const RequestClient& req) override
    {
        if(req.getReq() == Request::Request3)    
        {
            std::cout << "RequestHandler3 处理 OK" << std::endl;
            return true;
        }
        else
        {
            std::cout << "RequestHandler3 无法处理,传入下一个" << std::endl;
            return AbstractHandler::Handle(req);
        }
    }
};