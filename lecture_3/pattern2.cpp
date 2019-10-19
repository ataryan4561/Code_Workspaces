#include<iostream>
using namespace std;
void mirrortriangle(int rows)
{
    int nst=1;
    int nsp=0;
    for(int r=1; r<=rows; r++)
    {
        for(int csp=1; csp<=nsp; csp++)
        {
            cout<<" ";
        }
        for(int cst=1; cst<=nst; cst++)
        {
            cout<<"*";
        }
        nst++;
        nsp=0;
        cout<<endl;
    }
}
int main(int args,char** argv)
{
    int rw;
    cout<<"Enter the no rows ";
    cin>>rw;
    mirrortriangle(rw);
}