#include<bits/stdc++.h>
using namespace std;

int countDigi(long long n) {
    if(n!=0) {
        n=abs(n);
        int count=0;
        while (n!=0) {
            count++;
            n=n/10;
        }
        return count;
    }
    else return 1;
}
int main() {
    long long n;
    cin >> n;
    cout << countDigi(n);
    return 0;
}