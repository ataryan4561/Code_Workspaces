#include<iostream>
using namespace std;
void sub(int n1,int n2)
{
    if(n1>n2)
    {
        int pow=1;
        int bow=0;
        int res=0;
        int rem;
        while(n1!=0)
        {
            rem=(n1%10)-(n2%10)+bow;
            if(rem<0)
            {
                rem+=8;
                bow=-1;
            }else
            {
                bow=0;
            }
            res=rem*pow+res;
            pow=pow*10;
            n1=n1/10;
            n2=n2/10;
        }
        cout<<"octal sub="<<"\n"<<res;
    }
}
int main()
{   
    int n1,n2;
    int temp;
    cout<<"Enter the two no";
    cin>>n1>>n2;
    if(n2>n1)
    {
        n2=temp;
        temp=n1;
        n1=temp;
    }
    sub(n1,n2);
}