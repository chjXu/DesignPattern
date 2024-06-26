## 观察者/事件模式

#### 动机：

> 在软件构建过程中，需要为某些对象建立一种“通知依赖关系” ---- 一个对象（目标对象）的状态发生改变，所有的依赖对象（观察者）都将得到通知。如果这样的依赖关系过于紧密，将使软件不能很好的抵御变化；

> 使用面向对象技术，可以将这种依赖关系弱化，并形成一种稳定的依赖关系。从而使得软件体系结构的松耦合；

#### 定义Gof

> 定义一种一对多(变化)的关系，让多个观察者对象同时监听某一个主题对象；这个主题对象在状态发生时，通知所有观察者对象，使他们能够自动更新自己。

#### 结构图:

![](https://github.com/chjXu/DesignPattern/blob/main/figures/observer.png)

#### 总结

> 使用面向对象的抽象，观察者模式使得我们可以独立地改变目标与观察者，从而使得二者之间的依赖关系达到松耦合；

> 目标发送通知时，无需指定观察者，通知（可以携带通知信息作为参数）会自动传播；

> 观察者自己决定是否需要订阅通知，目标对象对此一无所知；

> 观察者模式是基于事件的UI框架中非常有用的设计模式，也是MVC模式中的一个重要组成部分；