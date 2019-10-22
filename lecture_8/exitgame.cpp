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
void exitgame(vector <vector<int>> &arr)
{ 
     int dir=0;
    int r=0;
    int c=0;
    while(true)
 {
    dir=(dir+arr[r][c])%4;
    if (dir==0)
    {
        c++;
        if(c==arr.size())
        {
            cout<< r <<","<<(c-1)<<endl;
            break;
        }
        else if(dir==1)
        {
            r++;
            if(r==arr.size())
            {
                cout<<r-1<<","<<c<<endl;
                break;
            }
        }
        else if(dir==2)
        {
            c--;
            if(c==-1)
            {
                cout<<r<<","<<c+1<<endl;
                break;
            }
        }
        else
        {   
            r--;
            if(r==-1)
            {
                cout<<r+1<<","<<c<<endl;
                break;
            }
        }    
    }
 }
}
int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>> arr(n,vector<int>(m,0));
    input(arr);
    exitgame(arr);
}