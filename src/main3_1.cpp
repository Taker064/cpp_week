#include "sample3-1.h"
#include <iostream>

using namespace std;

int main(){
    Sample3_1 s;
    s.a = 1;
    //s.b = 2としても書き換えることができない
    s.func1();
    //s.func2(); としても呼び出せない。func1内で呼び出されるだけ
}