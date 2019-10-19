#include<iostream>
using namespace std;
int main(int args,char**argv)
{
    int n;
    cin>>n;
    int f=1;
    while(n!=1)
    {
        f=f*n;
        n--;
    }
    cout<<"f= "<<f;
    return 0;
}
