#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
#define MAX 15
struct SV{
   string msv;
   string name;
   int age;
   string address;
   double marks;
};
void nhapDL(SV &sv) {
    cout << "Ma sinh vien: ";
    cin >> sv.msv;
    cin.ignore();
    cout << "Ho va ten: ";
    getline(cin, sv.name);
    cout << "Tuoi: ";
    cin >> sv.age;
    cin.ignore();
    cout << "Dia chi: ";
    getline(cin, sv.address);
    cout << "Diem so: ";
    cin >> sv.marks;
}
void xuatDL(SV &sv) {
    cout << "Ma sinh vien: " << sv.msv << endl;
    cout << "Ho va ten: " << sv.name << endl;
    cout << "Tuoi: " << sv.age << endl;
    cout << "Dia chi: " << sv.address << endl;
    cout << "Diem so: " << fixed << setprecision(2) << sv.marks;
}
void danhSachSV(SV a[MAX], int n) {
    for(int i=0;i<n;i++) {
        nhapDL(a[i]);
    }
}
void xuatDSSV(SV a[MAX], int n) {
        for(int i=0;i<n;i++) {
        xuatDL(a[i]);
        cout << endl;
    }
}
int main() {
    SV a[MAX];
    int n;
    cin >> n;
    danhSachSV(a,n);
    xuatDSSV(a,n);
    return 0;
}