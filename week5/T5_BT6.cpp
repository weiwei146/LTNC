#include<iostream>
using namespace std;

struct complex{
  int a,b;
  complex(int _a=0, int _b=0) {
      a=_a;
      b=_b;
  }
};
void nhapDL(complex &i) {
    cin >> i.a >> i.b;
}
complex add(complex i1, complex i2) {
    complex other(0,0);
    other.a= i1.a + i2.a;
    other.b= i1.b + i2.b;
    return other;
}
complex subtract(complex i1, complex i2) {
    complex other(0,0);
    other.a= i1.a - i2.a;
    other.b= i1.b - i2.b;
    return other;
}
complex multiply(complex i1, complex i2) {
    complex other(0,0);
    other.a= i1.b*i2.a + i2.b*i1.a;
    other.b= i1.a*i2.a+i1.b*i2.b;
    return other;
}
void xuatDL(complex i) {
    if(i.a!=0) {
        if(i.b>0) {
            cout << i.a << "i + " << i.b;
        }
        if(i.b==0) {
            cout << i.a;
        }
        if(i.b<0) {
            cout << i.a << "i " << i.b;
        }
    }
    else {
        cout << i.b;
    }
}
int main() {
    complex i1,i2;
    nhapDL(i1);
    nhapDL(i2);
    xuatDL(add(i1,i2));
    cout << endl;
    xuatDL(subtract(i1,i2));
    cout << endl;
    xuatDL(multiply(i1,i2));
    return 0;
}
