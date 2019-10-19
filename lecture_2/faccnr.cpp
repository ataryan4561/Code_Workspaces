#include<iostream>
using namespace std;
int fac(int n){
    int ans =1;
    while(n!=1)
    {
        ans=ans*n;
        n--;
    }
    return ans;
}
void cnr()
{
    int n,r;
    cout<<"enter the valur of n and r";
    cin>>n>>r;
    int a=(fac(n)/(fac(n-r)*fac(r)));
    cout<<a<<"\n";
}
int main(int args,char**argv){
    int g;
    cout<<"Enter the value of n for factorial";
    cin>>g;
    int a=fac(g);
    cout<<a<<"\n";
    cnr();
}