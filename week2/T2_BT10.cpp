#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;
    const int MAX_N=1000;
    double vectorA[MAX_N];
    double vectorB[MAX_N];
    for(int i=0;i<n;i++) {
        cin >> vectorA[i];
    }
    for(int i=0;i<n;i++) {
        cin >> vectorB[i];
    }
    double product=0;
    for(int i=0;i<n;i++) {
        product += vectorA[i]*vectorB[i];
    }
    cout << fixed << setprecision(2) << product;
    return 0;
}