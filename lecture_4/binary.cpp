#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n; 
    cin>>n;
    int res=0;
    int pow=1;
    while(n!=0)
    {
        int rem=n%2;
        res=rem*pow+res;
        pow=pow*10;
        n=n/2;
    }
    cout<<"binary="<<res<<"\n";
    int po=1;
    int t=1;
    while(res!=0)
    { 
        int s=res%10;  
        t=(2*po)*s+t;
        res=res/10;
        po=po*2;
    }
    cout<<"decimal is= "<<t;
}
