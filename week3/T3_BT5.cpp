#include<iostream>
using namespace std;

int main() {
    int n;
    cin >>n;
    int a[1000];
    int m=n/2;
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }
    int dem=0;
    for(int k=0;k<n/2;k++) {
        if(a[k]==a[n-1-k]) dem++;
    } 
    if(dem==m) cout << "Symmetric array.";
    else cout << "Asymmetric array.";
    return 0;
}