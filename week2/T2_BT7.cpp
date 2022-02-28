#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double x;
	cin>>x;
    double sum=1,oldsum=0;
    int i=1;
    double X=x;
    double giaithua=i;
    while(sum-oldsum>0.001)
    {
        oldsum=sum;
        sum+=X/giaithua;
        i++;
        giaithua*=i;
        X*=x;
    }
    cout<<fixed<<setprecision(4)<<sum;
    return 0;
}