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
