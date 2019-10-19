#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector <int> arr(n);
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int max=arr[0];
    int index;
    for(int i=1; i<n; i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
            index=i;
        }
    }
}