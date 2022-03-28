#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
#define MAX 5
struct SV{
   string msv;
   string name;
   int age;
   double marks;
};
void nhapDL(SV &sv) {
    cout << "Enter student information" << endl;
    cout << "Roll no: ";
    cin >> sv.msv;
    cin.ignore();
    cout << "Name: ";
    getline(cin, sv.name);
    cout << "Age: ";
    cin >> sv.age;
    cout << "Marks: ";
    cin >> sv.marks;
}
void xuatDL(SV &sv) {
    cout << "Roll no: " << sv.msv << endl;
    cout << "Name: " << sv.name << endl;
    cout << "Age: " << sv.age << endl;
    cout << "Marks: " << fixed << setprecision(2) << sv.marks;
}
void danhSachSV(SV a[MAX], int n) {
    for(int i=0;i<n;i++) {
        nhapDL(a[i]);
    }
}
void xuatDSSV(SV a[MAX], int k) {
        xuatDL(a[k+1]);
        cout << endl;
}
int main() {
    SV a[MAX];
    int n;
    cin >> n;
    int k;
    cin >> k;
    danhSachSV(a,n);
    xuatDSSV(a,k);
    return 0;
}