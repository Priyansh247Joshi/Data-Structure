#include<bits/stdc++.h>
using namespace std;
int findMinimum(int arr[],int n,int x,int y)
{
    int min_dist=INT_MAX;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if((x==arr[i]  && y==arr[j]) || (y==arr[i] && x==arr[j]) && (min_dist >abs(i-j)))
                min_dist=abs(i-j);
        }
    }
    return min_dist;
}
int main()
{
    int arr[]={2, 5, 3, 5, 4, 4, 2, 3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=3,y=2;
    cout<<"The minimum distance between the given Element is: "<<findMinimum(arr,n,x,y);
    return 0;
}
