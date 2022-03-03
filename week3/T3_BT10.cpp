#include<iostream>
#include<string>
using namespace std;

int main() {
    string s;
    getline(cin,s);
    int n=s.length();
    int count=0;
    for(int i=0;i<n;i++) {
         if (!(('0'<= s[i] && s[i] <= '9') || ('a'<= s[i] && s[i] <= 'z') || ('A'<= s[i] && s[i] <= 'Z'))) count++;
    }
    if((s[0]>='0'&&s[0]<='9')||n<6||n>15||count!=0) cout << "Invalid username.";
    else cout <<  "Valid username.";
    return 0;
}