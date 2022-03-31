#include<iostream>
#include<cstring>
using namespace std;

void rFilter(char *s) {
    int n=strlen(s)-1;
    while(!('a'<=s[n]&&s[n]<='z'||'A'<=s[n]&&s[n]<='Z')) {
            s[n]='_';
            n--;
    }
}
int main() {
    char *s;
    s = new char[50];
    cin >> s;
    rFilter(s);
    cout << s;
    return 0;
}