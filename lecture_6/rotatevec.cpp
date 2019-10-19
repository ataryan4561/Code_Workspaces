#include<iostream>
#include<vector>
using namespace std; 
void swap_(vector <int> &vec ,int i,int j)
{
    int temp=vec[i];
    vec[i]=vec[j];
    vec[j]=temp;
}
void reverse(vector <int> & vec, int li ,int ui)
{
   while(li<ui)
   {
       swap_(vec,li,ui);
       li++;
       ui--;
   }
}
void rotate(vector <int> &vec,int ro)
{
    ro=ro%vec.size();
    if(ro<0)
    {
        ro=ro+vec.size();
    }
    reverse(vec,0,ro-1);
    reverse(vec,ro,vec.size()-1);
    reverse(vec,0,vec.size()-1);
    for(int i=0; i<vec.size(); i++)
    {
        cout<<vec[i]<<" ";
    }
}
int main()
{
    int r,n;
    cout<<"enter the size ";
    cin>>n;
    cout<<"enter the rotate value ";
    cin>>r;
    vector <int> vec(n);
    for(int i=0; i<vec.size(); i++)
    {
        cin>>vec[i];
    }
    rotate(vec,r);
}
