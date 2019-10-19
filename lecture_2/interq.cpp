#include<iostream>
using namespace std;
int digit(int n)
{ int count =0;
    while(n!=0)
    {
        n=n/10;
        count++;
    }
    return count;
}

int main(int args,char**argv)
{
    int n;
    cin>>n;
    int f;
    int a=digit(n);
    cout<<"the value to reverse ";
    cin>>f;
    if(f<0)
    {
        f=f%a;
        f=f+a;
    }
    if(f>a)
    {
        f=f%a;
    }
    int mul=1;
    int div=1;
    for(int i=1; i<=a; i++)
    {
        
        if(i<=f)
        mul=mul*10;
        else
        div=div*10;
    }
    //cout<<mul<<"  " <<div;
    int fdigit=n%div;
    int sdigit=n/div;
    //cout<<fdigit<<" "<<sdigit;
    int y=fdigit*mul + sdigit;
    cout<<"reverse is ="<<y;

}