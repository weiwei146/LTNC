#include<iostream>
using namespace std;

class Area {
    double length, breadth;
public: 
    Area(double a, double b){
        length=a;
        breadth=b;
    }
    double returnArea() {
        return length*breadth;
    }
};
int main() {
    double a,b;
    cin >> a >> b;
    Area rectangle(a,b);
    cout << rectangle.returnArea();
    return 0;
}