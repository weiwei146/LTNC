#include<iostream>
using namespace std;

int main() {
int n;
cin >> n;
const int MAX_N=n;
int a[MAX_N];
int b[MAX_N];
for(int i=0;i<n;i++) {
cin >> a[i];
}
for(int i=0;i<n;i++) {
cin >> b[i];
}
int j=0;
for(int i=0;i<n;i++) {
if(a[i]==b[i]) j++;
}
if(j==n) cout << "YES";
else cout << "NO";
return 0;
}