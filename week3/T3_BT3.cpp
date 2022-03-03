#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    const int MAX_N=1000;
    int a[MAX_N];
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }
    int b[1000];
    int x=1;
    b[0]=a[0];
    for(int i=0;i<n;i++) {
        int dem=0;
        for(int j=0;j<x;j++) {
         if(a[i]==b[j]) dem++;
        }
        if(dem==0) {
            b[x]=a[i];
            x++;
        }
    }
    for(int i=0;i<x-1;i++) {
        for(int j=i+1;j<x;j++) {
            if(b[i]>b[j]) swap(b[i],b[j]);
        }
    }
    for(int i=0;i<x;i++) {
        cout << b[i] << " ";
    }
    return 0;
}