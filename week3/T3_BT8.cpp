#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    getline (cin, s);
    for (int i=0; i<s.length(); i++)
    {
        if (i > s.length()-4 || s.substr(i,4) != "Zues") cout << s[i];
        else 
        {
            cout << "Zeus";
            i+=3;
        }
    }
    return 0;
}