#include<iostream>
#include<iomanip>
#include<algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    const int MAX_N=1000;
    double a[MAX_N];
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }
    double k;
    cin >> k;
    a[n]=k;
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n+1;j++) {
            if(a[i]>a[j]) swap(a[i],a[j]);
        }
    }
    for(int i=0;i<n+1;i++) { 
        cout << fixed << setprecision(2) << a[i] << " ";
    }
    return 0;
}