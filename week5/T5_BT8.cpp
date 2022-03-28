#include<iostream>
using namespace std;

struct customer {
  string name;
  int account, balance;
};
void nhapDL(customer a) {
    cout << "Name: ";
    getline(cin,a.name);
    cout << "Account number: ";
    cin >> a.account;
    cout << "Balance of customers: ";
    cin >> a.balance;
}
void xuatDL(customer a) {
    cout << "Name: " << a.name << endl;
    cout << "Account number: " << a.account << endl;
    cout << "Balance of customers: " << a.balance << end;;
}
void DSKH(customer l[], int n) {
    for(int i=0;i<n;i++) {
        nhapDL(l[i]);
    }
}
void lessThan200(customer l[],int n) {
    for(int i=0;i<n;i++) {
        if(l[i].balance<200) cout << l[i].name << endl;
    }
}
void add100(customer l[],int n) {
    for(int i=0;i<n;i++) {
        if(l[i].balance>1000) {
            l[i].balance +=100;
            cout << l[i].balance << endl;
        }
    }
}