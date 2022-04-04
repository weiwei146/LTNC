#include<iostream>
using namespace std;

class Student {
    string name;
    int roll_no;
public:
    Student(string s, int n) {
        name=s;
        roll_no=n;
    }
    void printStudent() {
        cout << name << " " << roll_no;
    }
};
int main() {
    string s;
    cin >> s;
    int n;
    cin >> n;
    Student sv(s,n);
    sv.printStudent();
    return 0;
}