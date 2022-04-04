#include<iostream>
#include<set>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    set<int> s;
    for(int i=0;i<n;i++) {
        cin >> a[i];
        s.insert(a[i]);
    }
    cout << "Repeated number  Frequency"<< endl;
    for(int x:s) {
        int dem=0;
        for(int i=0;i<n;i++) {
            if(x==a[i]) dem++;
        }
        cout << x << "                 " << dem << endl;
    }
    return 0;
}