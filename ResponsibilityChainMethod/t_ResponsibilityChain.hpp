/**
    职责链模式 模板
    这里编写了一个测试代码
    假设用来处理一个请求，通过 链 的方式来判断该请求是否能够处理，如不能处理传送到下一个节点，如能处理，程序提前结束；
 */

#include <iostream>
#include <string>

enum T_Request
{
    t_Request1 = 1,
    t_Request2,
    t_Request3
};


class TRequestClient
{
public:
    TRequestClient(T_Request req) : req(req) {}
    T_Request getReq() const { return this->req; }

    bool operator==(const TRequestClient& other) const
    {
        return other.req == req;
    }
private:
    T_Request req;
};

// traits
// template<typename T>
// class IDTraits;

// template<>
// class IDTraits<TRequestClient>
// {
//     using ID = TRequestClient::getReq();
// };


// 定义基类
template<typename RequestType>
class THandler
{
public:
    THandler() : next_handler_(nullptr) {}
    virtual ~THandler() {}
    THandler* setNext(THandler *handler)
    {
        next_handler_ = handler;
        return this;
    }
    virtual bool Handle(const RequestType& req) const = 0;

protected:
    THandler* next_handler_;
};


template<typename RequestType>
class RequestHandler : public THandler<RequestType>
{
public:
    RequestHandler(const RequestType& req) : req(req) {}
    bool Handle(const RequestType& req) const
    {
        if(req == this->req)
        {
            std::cout << "RequestHandler" + std::to_string(this->req.getReq()) + " 处理 OK" << std::endl;
            return true;
        }
        else if(this->next_handler_ != nullptr)
        {
            std::cout << "RequestHandler" + std::to_string(this->req.getReq()) + " 无法处理,传入下一个" << std::endl;
            return this->next_handler_->Handle(req);
        }

        return false;
    }

private:
    RequestType req;
};