#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin,s);
    vector<string> v;
    stringstream ss;
    ss << s;
    while(!ss.eof()) {
        string word;
        ss >> word;
        v.push_back(word);
    }
    cout << "Hi " << v[2] << ", " << v[1] << " and " << v[0] << ".";
    return 0;
}