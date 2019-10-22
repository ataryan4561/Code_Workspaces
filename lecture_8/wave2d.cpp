#include<iostream>
#include<vector>
using namespace std;
void input(vector <vector<int>> &arr)
{
    for(int i=0; i<arr.size(); i++)
    {
        for(int j=0; j<arr[0].size(); j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<endl;
}
void displaywave(vector <vector<int>> & arr)
{
    for(int i=0; i<arr.size(); i++)
    {
        if(i%2==0)
        {
            for(int j=0; j<arr[0].size(); j++)
            {
                cout<<arr[i][j]<<" ";
            }
        }
        if(i%2!=0)
        {
            for(int j=arr[0].size()-1; j>=0;  j--)
            {
                cout<<arr[i][j]<<" ";
            }
        }
        cout<<endl;
    }
}
int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>> arr(n,vector<int>(m,0));
    input(arr);
    displaywave(arr);
}