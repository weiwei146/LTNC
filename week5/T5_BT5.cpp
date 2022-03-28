#include<iostream>
using namespace std;
#define MAX 5
struct Student{
 int rollNo;
 string name;
 double chem_marks,maths_marks,phys_marks;
};
void nhapDL(Student &sv) {
    cout << "---------------" << endl;
    cout << "roll no: ";
    cin >> sv.rollNo;
    cout << "Name: ";
    getline(cin,sv.name);
    cin.ignore();
    cout << "Chemistry marks: ";
    cin >> sv.chem_marks;
    cout << "Maths marks: ";
    cin >> sv.maths_marks;
    cout << "Physics marks: ";
    cin >> sv.phys_marks;
}
void xuatDL(Student sv) {
    cout << "------------" << endl;
    cout << "roll no: " << sv.rollNo << endl;
    cout << "Name: "<<sv.name << endl;
    cout << "Chemistry marks: " << sv.chem_marks << endl;
    cout << "Maths marks: " << sv.maths_marks << endl;
    cout << "Physics marks: " << sv.phys_marks << endl;
}
void danhSachSV(Student a[MAX]) {
    for(int i=0;i<MAX;i++) {
        nhapDL(a[i]);
        cout << endl;
    }
}
void xuatDSSV(Student a[MAX]) {
    for(int i=0;i<MAX;i++) {
        xuatDL(a[i]);
    }
}
int main() {
    Student a[MAX];
    danhSachSV(a);
    xuatDSSV(a);
    return 0;
}