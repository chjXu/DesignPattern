/*
 * @Description:  抽象基类，定义了实现的接口
 * @Author: chengjun_xu
 * @Data: Do not edit
 * @LastAuthor: Do not edit
 * @LastEditTime: 2022-01-14 10:45:50
 */


#pragma once

class Abstract{
public:
    virtual ~Abstract();

    virtual void showName() = 0;

public:
    Abstract();
private:

};