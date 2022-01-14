/*
 * @Description: 抽象基类，定义了实现的接口
 * @Author: chengjun_xu
 * @Data: Do not edit
 * @LastAuthor: Do not edit
 * @LastEditTime: 2022-01-14 11:53:54
 */


#pragma once

class AbstractionImplement{
public:
    virtual void showName() = 0;    //定义操作接口
    virtual ~AbstractionImplement();
protected:
    AbstractionImplement();
};