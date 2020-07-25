#include<bits/stdc++.h>
using namespace std;
void findmaxsubarray(int arr[],int n,int k)
{
    int res_index=0;
    int curr_sum=0;
    for(int i=0;i<k;i++)
        curr_sum=curr_sum+arr[i];
    int max_sum=curr_sum;
    for(int i=k;i<n;i++)
    {
        curr_sum=curr_sum+arr[i]-arr[i-k];
        if(curr_sum>max_sum)
        {
            curr_sum=max_sum;
            res_index=i-k+1;
        }
    }
    cout<<"["<<res_index<<" , "<<res_index+k-1<<"]";
}
int main()
{
    int arr[]={1, 12, -5, -6, 50, 3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=4;
    findmaxsubarray(arr,n,k);
    return 0;
}
