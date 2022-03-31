#include<iostream>
using namespace std;

double* getSquare (double number) {
    double* square= new double;
    *square= number*number;
    return square;
}