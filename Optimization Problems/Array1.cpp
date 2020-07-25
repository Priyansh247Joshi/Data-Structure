#include<bits/stdc++.h>
using namespace std;
int max_sum_subarray(int arr[],int n)
{
    int max_so_far=0,max_ending_here=0;
    for(int i=0;i<n;i++)
    {
        max_ending_here=max(arr[i],max_ending_here+arr[i]);
        max_so_far=max(max_so_far,max_ending_here);
    }
    return max_so_far;
}
int main()
{
    int arr[]={-2,-3,4,-1,-2,1,5,-3};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Maximum sum of the sub-array is: "<<max_sum_subarray(arr,n);
    return 0;
}
