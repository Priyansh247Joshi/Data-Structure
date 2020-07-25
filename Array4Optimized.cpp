#include<bits/stdc++.h>
using namespace std;
int findMinimum(int arr[],int n,int x,int y)
{
    int p=-1,min_dist=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x || arr[i]==y)
        {
            if(p!=-1 && arr[i]!=arr[p])
                min_dist=min(min_dist,i-p);
            p=i;
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
