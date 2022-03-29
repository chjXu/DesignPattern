/*
 * @Description:  
 * @Author: chengjun_xu
 * @Data: Do not edit
 * @LastAuthor: Do not edit
 * @LastEditTime: 2022-01-03 20:51:31
 */


#pragma once
#include <iostream>

using namespace std;

class Font
{
public:
    Font(const string& key);

    ~Font();


protected:
    
private:
    std::string key;
};