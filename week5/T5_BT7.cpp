#include<iostream>
#include<vector>
using namespace std;

struct Student {
    int rollNo, age;
    string name, address;
};

void nhapDL(Student sv) {
   cout << "roll no.";
   cin >> sv.rollNo;
   cout << "Age: ";
   cin >> sv.age;
   cin.ignore();
   cout << "Name: ";
   getline(cin, sv.name);
   cout << "Address: ";
   getline(cin,sv.address);
}
void xuatDL(Student sv) {
   cout << "roll no." << sv.rollNo << endl;
   cout << "Age: " << sv.age << endl;
   cout << "Name: " <<  sv.name << endl;
   cout << "Address: " << sv.address;
}
void DSSV(Student a[], int n) {
    for(int i=0;i<n;i++) {
        nhapDL(a[i]);
    }
}
void printAge14(Student a[], int n) {
    for (int i=0;i<n;i++) {
        if (a[i].age == 14) {
            cout << a[i].name << endl;
        }
    }
}
void printEvenRollNo(Student a[], int n) {
    for (int i=0;i<n;i++) {
        if (a[i].rollNo % 2) {
            cout << a[i].name << endl;
        }
    }
}
void display(int rollNo, int n, Student a[]) {
    for (int i=0;i<n;i++) {
        if (a[i].rollNo == rollNo) {
            cout << a[i].name << a[i].age << a[i].address << endl;
        }
    }
}
