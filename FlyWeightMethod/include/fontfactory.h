#pragma once
#include <iostream>
#include <map>

#include "font.h"

using namespace std;

class FontFactory{
public:

    FontFactory();

    ~FontFactory();

    Font* getFont(const string& key);

    void clear();
protected:

private:
    map<std::string, Font*> fontpool;
};