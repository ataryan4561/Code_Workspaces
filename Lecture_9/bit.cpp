#include<iostream>
using namespace std;
int count1(int res)
{
    int j=res;
    int count=0;
    int i=0;
    while(j!=0)
    {
        i++;
        int mask=(1<<i);
        if((res&mask)!=0)
        {
            count++;
            //cout<<count<<" ";
        }
        j=j/10;
    }
    return count;
}
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
    int h=count1(res);
    cout<<"="<<h<<"=";
}