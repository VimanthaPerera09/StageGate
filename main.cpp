#include <iostream>
#include "getNum.h"

int main(int argc, char const *argv[])
{
    getNum num(17);
    std::cout<<num.getNumVal()<<std::endl;
    return 0;
}
