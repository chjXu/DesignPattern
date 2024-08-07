# DesignPattern（设计模式）

#### 好的设计模式能够很好的规范代码，提高工作效率，避免bug；


## 设计模式8大原则：

1. 依赖倒置原则：高层模块（稳定）不应该依赖底层模块（变化），二者都应该依赖于抽象（稳定）。抽象（稳定）不应该依赖于实现细节（变化），实现细节应该依赖抽象（稳定）。

2. 开放封闭原则：对扩展开放，对更改封闭。类模块是可扩展的，但不可修改。

3. 单一职责原则：一个类应该仅有一个引起它变化的原因，变化方向隐含类的责任。

4. Liskov替换原则：子类必须能替换它们的基类，继承表达类型抽象。

5. 接口隔离原则：不应该强迫客户程序依赖它们不用的方法；接口小而完备。

6. 优先使用对象组合，而不是类继承。

7. 封装变化点：松耦合。

8. 针对接口编程，而不是针对实现编程。


## 重构关键技术：

1. 静态 -> 动态

2. 早绑定 -> 晚绑定

3. 继承 -> 组合

4. 编译时依赖 ->  运行时依赖

5. 紧耦合 -> 松耦合


## 模式分类 ：

1. 组件协作：[模板模式](https://github.com/chjXu/DesignPattern/tree/main/TemplateMethod)，[策略模式](https://github.com/chjXu/DesignPattern/tree/main/StrategyMethod)，[观察者/事件模式](https://github.com/chjXu/DesignPattern/tree/main/ObserverMethod)

2. 单一职责：[装饰者模式](https://github.com/chjXu/DesignPattern/tree/main/DecoratorMethod)，[桥模式](https://github.com/chjXu/DesignPattern/tree/main/BridgeMethod)

3. 对象创建：[工厂模式](https://github.com/chjXu/DesignPattern/tree/main/FactoryMethod)，[抽象工厂模式](https://github.com/chjXu/DesignPattern/tree/main/AbstractFactoryMethod)，建造者模式，原型模式

4. 对象性能：单一模式，享元模式

5. 接口隔离：门面模式，代理模式，中介模式，适配器模式

6. 状态变化：备忘录模式，状态模式

7. 数据结构：组合模式，迭代器模式，[职责链模式](https://github.com/chjXu/DesignPattern/tree/main/ResponsibilityChain)，职责模式

8. 行为变化：命令模式，访问者模式

9. 领域问题：解释器模式


下面分别解释其含义：

1. 组件协作：现代软件专业分工之后的第一个结果是“框架与应用程序的划分”，“组件协作”模式通过晚期绑定，来实现框架与应用程序之间的松耦合，是二者之间协作时常用的模式； 

2. 单一职责：在软件组件设计中，如果责任划分的不清晰，使用“继承”得到的结果往往是随着需求的变化，子类急剧膨胀，同时充斥着重复代码，这时候的关键是划清责任；

3. 对象创建：

## 适用场景：


#### 3. 建造者模式

定义：
> 将一个复杂对象的构建与其表示相分离，使用同样的构建过程（稳定）可以创建不同的表示（变化）

动机：
> 有时候面临着“一个复杂对象”的创建工作，其通常由各个部分的子对象用一定的算法构成；由于需求的变化，这个复杂对象的各个部分经常面临剧烈的变化，但是将它们组合在一起的算法却相对稳定；

> 保持系统中的“稳定构建算法”不随着需求改变而改变；

总结：
> 主要用于“分步构建一个复杂的对象”。其中，”分步“是一个稳定算法，而复杂对象的各个部分则经常变化

> 应对”复杂对象各个部分“的频繁需求变动。缺点在于难以应对”分步构建算法“的需求变动

> 注意不同语言构造器中调用虚函数的差别（C++ vs C#、Java）


#### 4. 原型模式

定义：
> 使用原型实例指定创建对象的种类，然后通过拷贝这些原型来创建新的对象

动机：
> 在软件系统中，经常面临“某些结构复杂的对象”的创建工作；由于需求的变化，这些对象经常面临剧烈的变化，但是它们却拥有比较稳定一致接口；

> 如何向“客户程序”隔离出“这些易变对象”，从而使“依赖这些易变对象的客户程序”不随着需求改变而改变；

总结：
> 原型模式同样适用于隔离类对象的使用者和具体类型（易变类）之间的耦合关系，它同样要求这些“易变类”拥有稳定的接口；

> 原型模式对于“如何创建易变类的实例对象”采用“原型克隆”的方法来做，它使得我们可以非常灵活的动态创建“拥有某些稳定接口”的新对象----所需工作仅仅是注册一个新类的对象（原型），然后在任何有需要的地方Clone;

> 原型模式中的Clone方法可以利用某些框架中的序列化来实现深拷贝；


#### 5.单一模式 
定义：
> 保证一个类仅有一个实例，并提供一个该实例的全局访问点

动机：

> 在构建对象，经常有这样一些特殊的类，必须保证它们在系统中只存在一个实例，才能保证它们的逻辑正确性、以及良好的效率。

> 如何绕过常规的构造器，提供一种机制来保证一个类只有一个实例？

> 这应该是类设计者的责任，而不是使用者的责任

总结：
> 单例模式中的实例构造器可以设置为protected以允许子类派生

> 单例模式一般不要支持靠内构造函数和clone接口，因为这有可能导致多个对象实例，与单例模式的初衷违背

> 如何实现多线程环境下的安全单例模式？注意对双检查锁的正确实现

#### 6.享元模式
定义：
> 运用共享技术有效地支持大量细粒度的对象

动机：
> 在软件系统中，采用纯粹的对象方案的问题在于大量细粒度的对象会很快充斥在系统中，从而带来很高的运行代价----主要是内存需求方面的代价

> 如何避免大量细粒度对象问题的同时，让外部客户程序仍然能够透明地使用面向对象的方式来进行操作

总结：
> 面向对象很好地解决了抽象性的问题，但是作为一个运行在机器中的程序实体，我们需要考虑对象的代价问题。FlyWeight主要解决面向对象的代价问题，一般不触及面向对象的抽象性问题

> FlyWeight采用对象共享的做法来降低系统中对象的个数，从而降低细粒度对象给系统带来的压力。在具体实现时，要注意对象状态的处理

> 对象的数量太大从而导致对象内存开销加大----什么样的数量才算大？这需要我们仔细的根据具体应用情况进行评估，而不能凭空臆断


#### 7.门面模式
定义：
> 为子系统的一组接口提供一个一致（稳定）的界面，门面模式定义了一个高层接口，这个接口使得这一子系统更加容易使用（复用）

动机：
> 在组件构建过程中，某些接口之间直接的依赖常常会带来很多问题、甚至根本无法实现。采用添加一层间接（稳定）接口，来隔离本来相互紧密关联的接口是一种常见的解决方案

> 组件的客户和组件中各种复杂的子系统有了过多的耦合，随着外部客户程序和各子系统的演化，这种过多的耦合棉铃很多变化的挑战

> 如何简化外部客户程序和系统间的交互接口？如何将外部客户程序的演化和内部子系统的变化之间的依赖相互解耦？

总结：
> 从客户程序角度来看，facade模式简化了整个组件系统的接口，对于组件内部与外部客户程序来说，达到一个“解耦”的效果----内部子系统的任何变化都不会影响到facade接口的变化

> facade设计模式更注重从架构的层次去看整个系统，而不是单个类的层次。Facade很多时候更是一种架构设计模式

> facade设计模式并非一个集装箱，可以任意地放进任何多个对象。Facade模式中组件的内部应该是“相互耦合关系比较大的一系列组件”，而不是一个简单的功能组合


#### 8.代理模式
定义：
> 为其它对象提供一种代理以控制（隔离，使用接口）对这个对象的访问

动机：
> 在面向对象系统中，有些对象由于某种原因（比如对象创建的开销很大，或者某些操作需要安全控制，或者需要进程外的访问等），直接访问会给使用者、或者系统结构带来很多麻烦

> 如何在不失去透明操作对象的同时来管理/控制这些对象特有的复杂性？增加一层间接层是软件开发中常见的解决方式

总结：
> “增加一层间接层”是软件系统中对许多复杂问题的一种常见解决方案。在面向对象系统中，直接使用某些对象会带来很多问题，作为间接层的proxy对象便是解决这一问题的常用手段

> 具体proxy设计模式的实现方法、实现力度都相差很大，很有可能对单个对象做细粒度的控制，如copy-on-write技术，有些可能组件模块提供抽象代理层，在架构层次对对象做proxy

> Proxy并不一定要求保持接口完整的一致性，只要能够实现间接控制，有损一定透明性是可以接受的


#### 9.适配器模式
定义：
> 将一个类的接口转换成客户希望的另一个接口。Adapter模式使得原本由于接口不兼容而不能一起工作的那些类可以一起工作

动机：
> 在软件系统中，由于应用环境的变化，常常需要将“一些现存的对象”放在新的环境中应用，但是新环境要求的接口是这些现存对象所不满足的

> 如何应对这种“迁移的变化”？如何既能利用现有对象的良好实现，同时又能满足新的应用环境所要求的接口？

总结：
> Adapter模式主要应用于“希望复用一些现存的类，但是接口又与复用环境要求不一致的情况”，在遗留代码复用、类库迁移等方面非常有用

> GoF 23定义了两种Adapter模式的实现结构：对象适配器和类适配器（不建议使用）。但是类适配器采用“多继承”的实现方式，一般不推荐使用。对象适配器采用“对象组合”的方式，更符合松耦合精神

> Adapter模式可以实现的非常灵活，不必拘泥于Gof23种定义的两种结构。如，可以将Adapter模式中的“现存对象”作为新的接口方法参数，来达到适配的目的

#### 10.中介模式
定义：
> 用一个中介对象来封装（封装变化）一系列的对象交互。中介者使各对象不需要显示的相互引用（编译时依赖->运行时依赖），从而使其耦合松散（管理变化），而且可以独立地改变它们之间的交互

动机：
> 在软件构建过程中，经常出现《多个对象互相交互》的情况，对象之间常常会维持一种复杂的引用关系，如果遇到一些需求的更改，这种直接引用关系将面临不断的变化

> 在这种情况下，我们可以使用一个“中介对象”来管理对象间的关联关系，避免相互交互的对象之间的紧耦合引用关系，从而更好的抵御变化 
 
总结：
> 将多个对象间复杂的关联关系解耦，Mediator模式将多个对象间的控制逻辑进行集中管理，变“多个对象互相关联”为“多个对象和一个中介者关联”，简化了系统的维护，抵御了可能的变化

> 随着控制逻辑的复杂化，Mediator具体对象的实现可能相当复杂。这时候可以对Mediator对象进行分解处理

> Facade模式是解耦系统间（单向）的对象关联关系；Mediator模式是解耦系统内各个对象之间（双向）的关联关系

#### 11.备忘录模式
定义：
> 在不破坏封装性的前提下，捕获一个对象的内部状态，并在该对象之外保护这个状态。这样以后就可以将该对象恢复带原先保存的状态

动机：
> 在组件构建过程中，某些对象的状态经常面临变化，如何对这些变化进行有效的管理？同时又维持高层模块的稳定？“状态变化”模式为这一问题提供了一种解决方案

> 在软件构建过程中，某些对象的状态在转换过程中，可能由于某种需要，要求程序能够回溯到对象之前处于某个点时的状态。如果使用一些公共接口来让其它对象得到对象的状态，便会暴露对象的细节实现

> 如何实现对象状态的良好保存与恢复？但同时又不会因此而破坏对象本身的封装性

总结：
> 备忘录存储原发器对象的内部状态，在需要时恢复原发器状态

> 备忘录模式的核心是信息隐藏，即Originator需要向外接隐藏信息，保持其封装性。但同时又需要将状态保持到外界

> 由于现代语言运行时都具有相当的对象序列化支持，因此往往采用效率较高、又容易正确实现的序列化方案来实现备忘录模式

#### 12.状态模式
定义：
> 允许一个对象在内部状态改变时改变它的行为。从而使对象看起来似乎修改了其行为

动机：
> 在软件构建中，某些对象的状态如果改变，其行为也会随之而发生变化，比如文档处于只读状态，其支持的行为和读写状态支持的行为就可能完全不同

> 如何在运行时根据对象的状态来透明的更改对象的行为？而不会为对象操作和状态转化之间引入紧耦合？

总结：
> State模式将所有与一个特定状态相关的行为都放入一个State的子类对象中，在对象状态切换时，切换相应的对象；但同时维持State接口，这样实现了具体操作与状态之间的解耦

> 为不同的状态引入不同的对象使得状态转换变得更加明确，而且可以保证不会出现状态不一致的情况，因为转换是原子性的----即要么彻底转换过来，要么不转换

> 如果State对象没有实例变量，那么各个上下文可以共享同一个State对象，从而节省对象开销

