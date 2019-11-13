#include<iostream>
#include<vector>
using namespace std;
void ss(vector<int> &arr,int index)
{
    if(index==arr.size())
    {
        return ;
    }
    int temp=arr[index];
    ss(arr,index+1);
    arr[temp]=index;
    cout<<arr[index]; 
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