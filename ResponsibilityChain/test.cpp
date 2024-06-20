#include "ResponsibilityChain.hpp"

int main(int argc, char** argv)
{
    IntHandler *int_handler = new IntHandler;
    StringHandler *string_handler = new StringHandler;
    DoubbleHandler *double_handler = new DoubleHandler;
    
    int_handler->setNext(string_handler)->setNext(double_handler);
    int_handler->Handler(0, "A", 1.0);
    
    delete int_handler;
    delete string_handler;
    delete double_handler;
    return 0;
}