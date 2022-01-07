/*
 * @Description:  被观察者（主题）类
 * @Author: chengjun_xu
 * @Data: Do not edit
 * @LastAuthor: Do not edit
 * @LastEditTime: 2022-01-07 15:43:38
 */

/**
 * 为所有具体观察者定义一个接口，在得到主题的通知及时更新自己。
*/

#pragma once

class Observer{
public:
    virtual void update(int) = 0;
protected:

private:

};