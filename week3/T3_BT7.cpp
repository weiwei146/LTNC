#include<iostream>
#include<string>
using namespace std;

int main() {
    string s;
    getline(cin,s);
    int n=s.length();
    int countAlpha=0;
    int countNumber=0;
    int countOther=0;
    for(int i=0;i<n;i++) {
        if('a' <= s[i] && s[i] <= 'z' || 'A' <= s[i] && s[i] <= 'Z') countAlpha++;
        else if('0' <= s[i] && s[i] <= '9') countNumber++;
        else countOther++;
    }
    cout << countAlpha << " " << countNumber << " " << countOther;
    return 0;
}