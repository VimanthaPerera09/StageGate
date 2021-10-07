#include <iostream>
#include "getNum.h"

void addOne(int& a)
{
a++;
}

int main(int argc, char const *argv[])

{   
    int val = 5;
    addOne(val);
    getNum num(val);
    std::cout<<num.getNumVal()<<std::endl;
    num.incNum(6);
    std::cout<<num.getNumVal()<<std::endl;
    return 0;
}
