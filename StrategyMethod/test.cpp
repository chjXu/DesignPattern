/*
 * @Description: 策略模式
 */

#include "Strategy.hpp"
#include "t_Strategy.hpp"

int main(){
    
    // Context *c1 = new Context(new ConcreteStrategyA());
    // Context *c2 = new Context(new ConcreteStrategyB());
    // // Context *c3 = new Context(new ConcreteStrategyC());
    // c1->ContextInterface();
    // c2->ContextInterface();
    // // c3->ContextInterface();
    // if(c1) delete c1;
    // if(c2) delete c2;
    // // if(c3) delete c3;

    // 初始策略 A
    auto ctx = Context(std::make_unique<ConcreteStrategyA>());
    ctx.ContextInterface();
    std::cout << ctx.getStrategy() << std::endl;

    // 切换到策略 B
    ctx.setStrategy(std::make_unique<ConcreteStrategyB>());
    ctx.ContextInterface();
    std::cout << ctx.getStrategy() << std::endl;

    // // test template
    // TContext<TConcreteStrategyA<int>>* context_a = new TContext<TConcreteStrategyA<int>>(new TConcreteStrategyA<int>());
    // context_a->ContextInterface();
    // // TContext<TConcreteStrategyD>* context_d = new TContext<TConcreteStrategyD>(new TConcreteStrategyD());
    // // context_d->ContextInterface();
    // if(context_a) delete context_a;
}