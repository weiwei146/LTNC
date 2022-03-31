#include<iostream>
#include<cstring>
using namespace std;

void reverse(char *s) {
    int n=strlen(s);
    char* a= new char[n];
    for(int i=0;i<n;i++) {
        a[i]=s[i];
    }
    for(int i=0;i<n;i++) {
        s[i]=a[n-1-i];
    }
}
int main() {
    char *s;
    s = new char[50];
    cin >> s;
    reverse(s);
    cout << s;
    return 0;
}