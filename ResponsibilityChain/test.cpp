#include "ResponsibilityChain.hpp"
#include "t_ResponsibilityChain.hpp"

int main(int argc, char** argv)
{
    // test
    // RequestClient req(Request::Request3);
    // RequestHandler1 *r1_handler = new RequestHandler1;
    // RequestHandler2 *r2_handler = new RequestHandler2;
    // RequestHandler3 *r3_handler = new RequestHandler3;
    
    // r1_handler->setNext(r2_handler);
    // r2_handler->setNext(r3_handler);
    // r1_handler->Handle(req);
    

    // test template
    TRequestClient req(T_Request::t_Request3);
    RequestHandler<TRequestClient> *r1_handler = new RequestHandler<TRequestClient>(TRequestClient(T_Request::t_Request1));
    RequestHandler<TRequestClient> *r2_handler = new RequestHandler<TRequestClient>(TRequestClient(T_Request::t_Request2));
    RequestHandler<TRequestClient> *r3_handler = new RequestHandler<TRequestClient>(TRequestClient(T_Request::t_Request3));
    // r1_handler->setNext(r2_handler)->setNext(r3_handler);   // Error
    r1_handler->setNext(r2_handler);
    r2_handler->setNext(r3_handler);

    r1_handler->Handle(req);

    delete r1_handler;
    delete r2_handler;
    delete r3_handler;

    return 0;
}