/*
 * @Description: 
 * @Author: chengjun_xu
 * @Data: Do not edit
 * @LastAuthor: Do not edit
 * @LastEditTime: 2022-01-03 20:47:06
 */



#include <iostream>
#include <string>

#include "font.h"
#include "fontfactory.h"


using namespace std;

int main(){
    FontFactory* ff = new FontFactory();

    for (int i=0; i<200; ++i){
        ff->getFont("font" + to_string(i));
    }

    delete ff;
}