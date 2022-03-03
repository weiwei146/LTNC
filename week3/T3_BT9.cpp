#include<iostream>
#include<string>
using namespace std;

int main() {
    string s;
    getline(cin,s);
    int j=0;
    while(s[j]==' '&&s[j+1]==' ') {
    	j++;
	}
	    while(s[s.length()-1]==' ') {
		s.erase(s.begin()+s.length()-1);
	}
	for(int i=j+1;i<s.length();i++) {
		while(s[i]==' '&&s[i+1]==' ') {
			s.erase(s.begin()+i);
		}
	}
    cout << s;
    return 0;
}