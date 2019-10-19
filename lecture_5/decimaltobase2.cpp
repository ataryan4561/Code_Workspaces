#include<iostream>
using namespace std;
int basetodecimal (int res,int base)
{
    int pow=1; 
    int t=0;
    while(res!=0)
    {
        int s=res%10;
        t=(s)*pow+t;
        res=res/10;
        pow=pow*base;
    }
    //cout<<"decimal="<<t<<"\n";
    return t;
}
void decimaltobase(int dec,int base2)
{
    int res=0;
    int pow=1;
    while(dec!=0)
    {
        int rem=dec%base2;
        res=rem*pow+res;  
        pow=pow*base2;
        dec=dec/base2;
    }
    cout<<"no="<<res<<"\n";
}
int main()
{
    int n,b,b2;
    cin>>n>>b>>b2;
    int dec;
    dec=basetodecimal(n,b);
    decimaltobase(dec,b2);

}