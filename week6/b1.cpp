#include<iostream>
using namespace std;

int main() {
    int n,d;
    cin >> n >> d;
    int* a= new int[n];
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }
    int* b=new int[n];
    for(int i=d;i<n;i++) {
        b[i]=a[i];
        cout << b[i] << " ";
    }
    for(int i=0;i<d;i++) {
        cout << a[i] << " ";
    }
    return 0;
}