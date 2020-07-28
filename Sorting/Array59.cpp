#include<bits/stdc++.h>
using namespace std;
int findMissing(int arr[],int n)
{
    int counter=0;
    sort(arr,arr+n);
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]!=arr[i+1] && arr[i]!=arr[i+1]-1)
            counter+=arr[i+1]-arr[i]-1;
    }
    return counter;
}
int main()
{
    int arr[]={4, 5, 3, 8, 6};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<findMissing(arr,n);
    return 0;
}
