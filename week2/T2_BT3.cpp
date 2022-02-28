#include<bits/stdc++.h>
using namespace std;

int main() {
    int m,n;
    cin >> m >> n;
    for(int i=m;i<=n;i++) {
        int p=sqrt(i);
        if(i==p*p) cout << i << " ";
    }
    return 0;
}