#include <iostream>
#include <vector>
#include <memory>
#include <string>
#include "Observer.hpp"

// 假设现在有一个老板（subject），手底下带有多个员工（observers）。
// 当老板的状态发生变化时，所有的员工都会收到通知并做出相应的反应。
int main() {
    // 创建老板（ConcreteSubject）
    auto boss = std::make_shared<ConcreteSubject>();

    // 创建员工（ConcreteObservers）并分配(注册)到老板
    std::vector<std::shared_ptr<Observer>> staffes;
    for (int i = 0; i < 10; ++i) {
        auto staff = std::make_shared<ConcreteObserver>(i); // i 作为员工 ID
        staffes.push_back(staff);
        boss->attach(staff);
    }

    // 老板说要对所有员工加工资
    boss->setState(std::string("All staff add money bonus."));
    // 通知所有员工
    boss->notify();

    std::cout << "---------------------------------" << std::endl;

    // 现在要对部分员工再次加工资，对10名员工的前5名员工进行加薪
    for (int i = 5; i < 10; ++i) {
        boss->detach(staffes[i]);
    }
    boss->setState(std::string("you add money bonus again."));
    // 通知剩余员工
    boss->notify();

    // 对上面注销过的员工，再次添加进来
    for (int i = 5; i < 10; ++i) {
        boss->attach(staffes[i]);
    }

    std::cout << "---------------------------------" << std::endl;
    // 后面2名不满意，屏蔽老板的通知
    for (int i = staffes.size() - 2; i < staffes.size(); ++i) {
        staffes[i].reset(); // 销毁后2名员工对象，变成过期观察者
    }
    boss->setState(std::string("meeting at 3 PM."));
    boss->notify();

    std::cout << "---------------------------------" << std::endl;

    // 老板发现了，开除他们，并对其他人发出通知
    boss->setState(std::string("staff of id 8 and id 9 quit job."));
    boss->notify();

    std::cout << "---------------------------------" << std::endl;

    // 现在又有1名新员工加入，工号为10086
    auto newStaff = std::make_shared<ConcreteObserver>(10086);
    boss->attach(newStaff);
    boss->setState(std::string("new staff 10086 join the company."));
    boss->notify();

    std::cout << "---------------------------------" << std::endl;

    // 现在又有一位新boss加入，并把前5名员工和新员工分给新老板
    // 老的老板就剩4位员工了
    auto newBoss =  std::make_shared<ConcreteSubject>();
    for (int i = 0; i < 5; ++i) {
        boss->detach(staffes[i]);
        newBoss->attach(staffes[i]);
    }
    boss->detach(newStaff);
    newBoss->attach(newStaff);
    newBoss->setState(std::string("your boss is change."));
    newBoss->notify();  

    std::cout << "---------------------------------" << std::endl;

    boss->setState(std::string("we only have 3 staff."));
    boss->notify();

    std::cout << "---------------------------------" << std::endl;
    // 最大的老板掀桌子，解雇所有员工，boss和新boss都不知道
    for (int i = 0; i < staffes.size(); ++i) {
        staffes[i].reset();
    }
    newStaff.reset();
    
    // 没有员工了，boss和新boss还不知情，输出为空
    boss->setState(std::string("all staff are fired."));
    boss->notify();  
    newBoss->setState(std::string("all staff are fired."));
    newBoss->notify();
    std::cout << "---------------------------------" << std::endl;
    std::cout << "system: 没人了，通知个球" << std::endl;
    return 0;
}