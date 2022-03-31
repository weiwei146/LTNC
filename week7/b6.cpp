#include<iostream>
#include<algorithm>
using namespace std;

bool comp(const int a, const int b)
{
   return a>b;
}
int* merge(int* firstArr, int lenArr1, int* secondArr, int lenArr2) {
    int* merge = new int[lenArr1+lenArr2];
    for(int i=0;i<lenArr1;i++) {
        merge[i]=firstArr[i];
    }
    for (int i=0;i<lenArr2;i++) {
        merge[lenArr1+i] =secondArr[i];
    }
    bool crease=true;
    if(firstArr[lenArr1 -1]<firstArr[0]) crease=false;
    if(crease) sort(merge, merge +lenArr1 +lenArr2);
    else sort(merge, merge +lenArr1 +lenArr2,comp);
    return merge;
}