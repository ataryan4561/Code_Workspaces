#include<iostream>
using namespace std;
int fabo(int n)
{
   if(n==1)
   {
       return 0;
   }
     int sum=1;
    int sa=fabo(n-1);
    sum=sum+sa;
    return sum;
}
int main()
{
    int n;
    cin>>n;
    int h=fabo(n);
    cout<<h<<endl;
}