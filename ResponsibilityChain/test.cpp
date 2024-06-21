#include "ResponsibilityChain.hpp"

int main(int argc, char** argv)
{
    Request req = Request::Request3;
    RequestHandler1 *r1_handler = new RequestHandler1;
    RequestHandler2 *r2_handler = new RequestHandler2;
    RequestHandler3 *r3_handler = new RequestHandler3;
    
    r1_handler->setNext(r2_handler);
    r2_handler->setNext(r3_handler);
    r1_handler->Handle(req);
    
    delete r1_handler;
    delete r2_handler;
    delete r3_handler;
    return 0;
}