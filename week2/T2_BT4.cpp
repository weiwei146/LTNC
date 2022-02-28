#include<bits/stdc++.h>
using namespace std;

int main() {
    int total, totalLegs;
    cin >> total >> totalLegs;
    bool flag=false;
    for(int numChicken=0; numChicken<= total; numChicken++) {
        if(numChicken*2+4*(total-numChicken)==totalLegs) { 
            flag=true;
            cout << "chicken = " <<numChicken << ", dog = " << total-numChicken;
            break;
        }
    }
    if(flag==false) cout << "invalid";
    return 0;
}