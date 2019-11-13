#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &arr,int index)
{
    if(index==arr.size())
    {
        return ;
    }
    cout<<arr[index];
    display(arr,index+1);
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
    display(arr,0);
}