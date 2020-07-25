#include<bits/stdc++.h>
using namespace std;
void find_min_subarray(int arr[],int n,int k)
{
    if(n<k)
        return;
    int res_index=0;
    int curr_sum=0;
    for(int i=0;i<k;i++)
        curr_sum=curr_sum+i;
    int min_sum=curr_sum;
    for(int i=k;i<n;i++)
    {
        curr_sum=curr_sum+arr[i]-arr[i-k];
        if(curr_sum<min_sum)
        {
            min_sum=curr_sum;
            res_index=i-k+1;
        }
    }
    cout<<"Sub Array between ["<<res_index<<" , "<<res_index+k-1<<"] has minimum avg ";
}
int main()
{
    int arr[]={3,7,90,20,10,50,40};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    find_min_subarray(arr,n,k);
    return 0;
}