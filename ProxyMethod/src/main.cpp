/*
 * @Description: 
 * @Author: chengjun_xu
 * @Data: Do not edit
 * @LastAuthor: Do not edit
 * @LastEditTime: 2022-01-03 20:47:06
 */



#include <iostream>
#include <string>

#include "subject.h"
#include "realsubject.h"
#include "subjectProxy.h"

using namespace std;

int main(){
    // 第一种情况，采取一般的操作，但有时realsubject对象无法捕获
    // ISubject* subject = new RealSubject();
    // subject->process();


    ISubject* subject = new SubjectProxy();
    subject->process();
    
    // delete subject;
}