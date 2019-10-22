#include<iostream>
#include<vector>
using namespace std;

void display(vector <vector<int>> & arr)
{
    for(int i=0; i<arr.size(); i++)
    {
        for(int j=0; j<arr[0].size(); j++)
        {
            cout<<arr[i][j]<<" ";
        }
    }
    cout<<endl;
}
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
/*for(vector<int> ar : arr);
{
    for(int ele : arr)
    {
        cout<<ele<<" ";
    }
}
cout<<endl;*/
int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>> arr(n,vector<int>(m,0));
    vector<vector<int>> arr;
    for(int i=0; i<n; i++)
    {
        vector<int> ar;
        for(int j=0; j<m; j++)
        {
            ar.push_back(10);
        }
        arr.push_back(ar);
    }
    input(arr);
    display(arr);
}