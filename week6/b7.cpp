#include <iostream>
#include <string>
using namespace std;

class Employee{
public:
   string name;
   int year;
   int salary;
   string address;
   Employee(string n ="", int y =0, int s =0, string ad =""){
      name =n;
      year=y;
      salary =s;
      address =ad;
   }
   void setEmployee(string n ="", int y =0, int s =0, string ad =""){
      name =n;
      year =y;
      salary =s;
      address =ad;
   }
};
int main()
{
   Employee a[3];
   string n;
   string ad;
   int y,s;
   for(int i=0;i<3;i++) {
       getline(cin,n);
       cin >> y;
       cin >> s;
       cin.ignore();
       getline(cin,ad);
       a[i].setEmployee(n,y,s,ad);
   }

   cout <<"Name\tYear of joining\tAddress\n";
   for (int i =0; i <3; i++)
   {
      cout <<a[i].name <<'\t' <<a[i].year <<"\t\t"
      <<a[i].address <<endl;
   }
   return 0;
}