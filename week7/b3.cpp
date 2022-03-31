#include<iostream>
using namespace std;

void swap(int* a, int* b) {
    int tmp;
    tmp=*a;
    *a=*b;
    *b=tmp;
}