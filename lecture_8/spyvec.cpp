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
void spyvec(vector <vector<int>> &arr)
{
    int minr=0;
    int minc=0;
    int maxr=arr.size()-1;
    int maxc=arr.size()-1;
    int tne=arr.size()*arr[0].size();
    while(tne!=0)
    {
        for(int i=minc; i<=maxc && tne!=0 ; i++)
        {
            cout<<arr[minr][i]<<" ";
            tne--;
        }
        minr++;
        for(int i=minr; i<=maxr && tne!=0; i++)
        {
            cout<<arr[i][maxc]<<" "; 
            tne--;     
        }
        maxc--;
        for(int i=maxc; i>=minc && tne!=0; i--)
        {
            cout<<arr[minr][i]<<" "; 
            tne--;     
        }
        maxr--;
        for(int i=maxr; i>=minr && tne!=0; i--)
        {
            cout<<arr[i][minc]<<" "; 
            tne--;     
        }
        minc--;
    }
}
int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>> arr(n,vector<int>(m,0));
    input(arr);
    spyvec(arr);
}