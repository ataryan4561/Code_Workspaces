#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int maxi(vector<int> &arr,int index)
{
    if(index==arr.size())
    {
        return INT_MIN;
    }
    int maxim=maxi(arr,index+1);
    return max(arr[index],maxim);
    
}
int mini(vector<int> &arr,int index)
{
    if(index==arr.size())
    {
        return INT_MAX;
    }
    int minim=mini(arr,index+1);
    return min(arr[index],minim);
    
}
bool find(vector<int> &arr,int index,int data)
{
    if(index==arr.size())
    {
        return false;
    }
    if(index==data)
    {
        return true;
    }
    return find(arr,index,data);
}
int main()
{
    int n; 
    cin>>n;
    vector <int> arr(n);
    for(int i=0; i<arr.size(); i++)
    {
        cin>>arr[i];
    }
}