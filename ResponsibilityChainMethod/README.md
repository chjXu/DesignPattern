## 职责链模式
#### 定义：
> 使多个对象都有机会处理请求，从而避免请求的发送者和接收者之间的耦合关系。将这些对象连成一条链，并沿着这条链传递请求，直到有一个对象处理它为止；

#### 动机：
> 在软件构件过程中，一个请求可能被多个对象处理，但是每个请求在运行时只能有一个接收者，如果显式指定，将必不可少地带来请求者与接收者的紧耦合；

> 如何使请求的发送者不需要指定具体的接收者？让请求的接收者自己在运行时决定来处理请求，从而使二者解耦；

#### 结构图:

![](https://github.com/chjXu/DesignPattern/blob/main/figures/responsibilityChain.png)

#### 总结：
> 职责链模式的应用场合在于“一个请求可能有多个接收者，但最后真正的接收者只有一个”，这个时候请求发送者与接收者的耦合有可能出现“变化脆弱”的症状，职责链的目的就是将二者解耦，从而更好地应对变化；

> 应用了职责链模式后，对象的职责分派将更具灵活性。我们可以在运行时动态添加/修改请求的处理职责；

> 如果请求传递到职责链的末尾仍得不到处理，应该有一个合理的缺省机制。这也是每一个接收对象的责任，而不是发出请求的对象的责任；
