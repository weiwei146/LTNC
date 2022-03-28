#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
struct Student {
   string rollNo;
   string name;
   int age;
   double marks;
};
void nhapDL(Student &sv) {
    cout << "Enter student information" << endl;
    cout << "Roll no: ";
    cin >> sv.rollNo;
    cin.ignore();
    cout << "Name: ";
    getline(cin, sv.name);
    cout << "Age: ";
    cin >> sv.age;
    cout << "Marks: ";
    cin >> sv.marks;
    cout << "-------------------"
}
void xuatDL(Student &sv) {
    cout << "roll no: " << sv.rollNo << endl;
    cout << "Name: " << sv.name << endl;
    cout << "Age: " << sv.age << endl;
    cout << "Marks: " << fixed << setprecision(2) << sv.marks;
}
int main() {
    Student sv;
    nhapDL(sv);
    xuatDL(sv);
    return 0;
}

