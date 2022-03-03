#include<iostream>
#include<string>
using namespace std;

int main() {
    string s;
    getline(cin,s);
    int n=s.length();
    for(int i=n-1;i>=0;i--) {
        s[i+1]=s[i];
    }
    s[0]=' ';
    int num_word=0;
    for(int i=0;i<n+1;i++) {
        if(s[i]!=' '&&s[i-1]==' ') num_word++; 
    }
    cout << num_word;
    return 0;
}