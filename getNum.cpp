#include "getNum.h"

getNum::getNum(int numy){
    num = numy;
}

int getNum::getNumVal(){
    return num;
}

int getNum::setNumVal(int Number){
    Number = num;
    return 0;
}

int getNum::incNum(int p){
    num = num+p;
    return 0;

}