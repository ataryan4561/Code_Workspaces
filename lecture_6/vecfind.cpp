#include<iostream>
#include<vector>
using namespace std;
/*bool find (vector<int>& arr , int data )
{
    int count=0;
    for(int i=0; i<arr.size(); i++)
    {
        if(arr[i]==data)
        {
            count=1;
        }
    }
    if(count==1)
    {
        return true;
    }
    if(count==0)
    {
        return false;
    }
}*/
bool find(vector<int> arr , int data)
{
    for(int ele: arr)
    {
        if(ele==data) return true;
    }
     return false;
}

int maxi(vector<int>& arr)
{
    int max=arr[0];
    for(int i=1 ; i<arr.size(); i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;
}
int mini(vector<int>& arr)
{
    int min=arr[0];
    for(int i=0 ; i<arr.size(); i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    return min;
}
int main ()
{ 
    int n,b;  
    cout<<"no of elements to enter ";
    cin>>n;
    vector<int> arr(n,0);
    for(int i=0; i<arr.size(); i++)
    {
            cin>>arr[i];
    } 
    cout<<"enter the no to find ";
    cin>>b;
    cout<<find (arr,b);
    cout<<"\n";
    int y=maxi(arr);
    int x=mini(arr);
    cout<<"the maximum is ="<<y<<"\n";
    cout<<"the minimum is = "<<x<<"\n";
}