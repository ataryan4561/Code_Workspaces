#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the no of bulbs ";
    cin>>n;
    cout<<"open bulb are"<<"\n";
    for(int i=1; i*i<=n; i++)
    {   
        cout<<i*i<<"   ";

    }

}