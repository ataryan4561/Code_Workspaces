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
void transpose(vector <vector<int>> &arr)
{
    int h=(arr.size()-1);
    for(int i=0; i<arr.size(); i++)
    {
        for(int j=i; j<arr[0].size(); j++)
        {   
            swap(arr[i][j],arr[j][i]);
        }
    }
}
void swapR(vector<vector<int>> & arr)
{
    int r1=0;
    int r2=arr[0].size()-1;
    while(r1<r2)
    {
        swap(arr[r1],arr[r2]);
        r1++;
        r2--;
    }
}
void swapC(vector<vector<int>> & arr)
{
    int c1=0;
    int c2=arr[0].size()-1;
    while(c1<c2)
    {
        for(int i=0; i<arr.size(); i++)
       {
        swap(arr[i][c1],arr[i][c2]);
        }
        c1++;
        c2--;
    }
}
void display(vector <vector<int>> & arr)
{
    for(int i=0; i<arr.size(); i++)
    {
        for(int j=0; j<arr[0].size(); j++)
        {
            cout<<arr[i][j]<<" ";
        }
         cout<<endl;
    }
}
int main()
{
    int n;
    cin>>n;
    vector<vector<int>> arr(n,vector<int>(n,0));
    input(arr);
    transpose(arr);
    //swapC(arr);
    swapR(arr);
    display(arr);
}