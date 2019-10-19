#include<iostream>
#include<vector>
using namespace std;
int maxrain(vector <int> & arr)
{
    int max_=0;
    int i=0;
    int j=arr.size()-1;
    while(i<j)
    {
        if(arr[i]<=arr[j])
        {
            max_=max(max_,arr[i]*(j-i));
            i++;
        }else
        {
            max_=max(max_,arr[j]*(j-i));
            j--;
        }
    }
    return max_;
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
    int y=maxrain(arr);
    cout<<"==="<<y<<"\n";
}