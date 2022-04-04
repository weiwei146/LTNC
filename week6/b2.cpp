#include <iostream>
#include<set>
using namespace std;

int main()
{
   int n;
   cin >>n;
   set<int> v;
   int a[n];
   for(int i=0;i<n;i++) {
       cin >> a[i];
       v.insert(a[i]);
   }
   for(int x:v) {
       int dem=0;
       for(int i=0;i<n;i++) {
           if(x==a[i]) dem++;
       }
       if(dem==1) cout << x << " ";
   }
   return 0;
}