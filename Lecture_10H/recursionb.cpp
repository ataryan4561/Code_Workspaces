#include<iostream>
using namespace std;
void r(int n)
{
    if(n==0)
    {
        return;
    }
    if(n%2==0)
    {
        cout<<n<<endl;
    }
    r(n-1);
    if(n%2!=0)
    {
        cout<<n<<endl;
    }
}
int main()
{
    int n;
    cin>>n;
    r(n);
}