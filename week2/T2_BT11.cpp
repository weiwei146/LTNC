#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;
    const int MAX_N=1000;
    double arr[MAX_N];
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    double sum=0;
    for(int i=0;i<n;i++) {
        sum += arr[i];
    }
    double mean=sum/n;
    double varX=0;
    for(int i=0;i<n;i++) {
        varX += (arr[i]-mean)*(arr[i]-mean);
        
    }
    cout << fixed << setprecision(2) << (double)varX/n;
    return 0;
}