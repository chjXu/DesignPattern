<!--
 * @Description:  readme
 * @Author: chengjun_xu
 * @Data: Do not edit
 * @LastAuthor: Do not edit
 * @LastEditTime: 2022-01-04 10:56:56
-->
# DesignPattern

设计模式8大原则：

1. 依赖倒置原则：高层模块（稳定）不应该依赖底层模块（变化），二者都应该依赖于抽象（稳定）。抽象（稳定）不应该依赖于实现细节（变化），实现细节应该依赖抽象（稳定）。

2. 开放封闭原则：对扩展开放，对更改封闭。类模块是可扩展的，但不可修改。

3. 单一职责原则：一个类应该仅有一个引起它变化的原因，变化方向隐含类的责任。

4. Liskov替换原则：子类必须能替换它们的基类，继承表达类型抽象。

5. 接口隔离原则：不应该强迫客户程序依赖它们不用的方法；接口小而完备。

6. 优先使用对象组合，而不是类继承。

7. 封装变化点：松耦合。

8. 针对接口编程，而不是针对实现编程。


重构关键技术：

1. 静态 -> 动态

2. 早绑定 -> 晚绑定

3. 继承 -> 组合

4. 编译时依赖 ->  运行时依赖

5. 紧耦合 -> 松耦合


模式分类：

1. 组件协作：模板模式，策略模式，观察者/事件模式

2. 单一职责：装饰者模式，桥模式

3. 对象创建：工厂模式，抽象工厂模式，建造者模式，原型模式

4. 对象性能：单一模式，享元模式

5. 接口隔离：外观模式， 代理模式，中介模式，适配器模式

6. 状态变化：备忘录模式，状态模式

7. 数据结构：组合模式，迭代器模式，职责链模式，职责模式

8. 行为变化：命令模式，访问者模式

9. 领域问题：解释器模式


适用场景：

1. 工厂模式
定义：
    定义一个用于创建对象的接口，让子类决定实例化哪一个类。工厂方法是的一个类的实例化延迟(目的：解耦，手段：虚函数)到子类

动机：
    在面向对象时，经常面临着创建对象的工作；由于需求的变化，需要创建的对象的具体类型经常变化

解决方案：
    绕过常规的对象创建方法（new），提供一种“封装机制”来避免客户程序和这种“具体对象创建”的紧耦合（依赖具体类）

图示：
    

总结：
    1.工厂模式用于隔离类对象的使用者和具体类型之间的耦合关系。面对一个经常变化的具体类型，紧耦合（new）关系会导致软件的脆弱

    2.工厂模式通过面向对象的手法，将所需要创建的具体对象工作延迟到子类，从而实现一种扩展（而非更改）的策略，较好地解决了这种耦合关系

    3.工厂模式解决“单个对象”的需求变化。缺点在于创建方法/参数相同