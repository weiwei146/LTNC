#include<iostream>
using namespace std;

int* getPointerToTen() {
    int* pInt;
    pInt = new int;
    *pInt=10;
    return pInt;
}