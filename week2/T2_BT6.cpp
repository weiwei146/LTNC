#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i=-n;i<=0;i++) { 
        for(int j=-n;j<=n;j++) { 
            if(j>=-n-i&&j<=n+i) { 
                cout << "*" << " ";
            }
            else cout << "." << " ";
        }
        cout << endl;
    }
    for(int i=0;i<n;i++) { 
        for(int j=-n;j<=n;j++) { 
            if(j>-n+i&&j<n-i) {   
                cout << "*" << " ";
            }
            else cout << "." << " ";
        }
        cout << endl;
    }
    return 0;
}