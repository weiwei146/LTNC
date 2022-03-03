#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;
    const int MAX_N=n;
    double a[MAX_N];
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }
    for(int i=0;i<n-1;i++) {
        for(int j=i+1;j<n;j++) {
            if(a[i]<a[j]) swap(a[i],a[j]);
        }
    }
    for(int i=0;i<n;i++) {
        cout << fixed << setprecision(2) << a[i] << " ";
    }
    return 0;
}