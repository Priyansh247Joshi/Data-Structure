#include<bits/stdc++.h>
using namespace std;
int findSmallestPair(int arr1[],int arr2[],int n1,int n2)
{
    int min_so_far=INT_MAX;
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            if(abs(arr1[i]-arr2[j]) < min_so_far)
                min_so_far=abs(arr1[i]-arr2[j]);
        }
    }
    return min_so_far;
}
int main()
{
    int arr1[]={10, 5, 40};
    int arr2[]={50, 90, 80};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    cout<<findSmallestPair(arr1,arr2,n1,n2);
    return 0;
}
