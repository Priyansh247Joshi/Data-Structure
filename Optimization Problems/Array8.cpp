#include<bits/stdc++.h>
using namespace std;
int smallestsubsum(int arr[],int n,int x)
{
    int min_len=n+1;
    for(int start=0;start<n;start++)
    {
        int curr_sum=arr[start];
        if(curr_sum > x)
            return 1;
        for(int ending=start+1;ending<n;ending++)
        {
            curr_sum=curr_sum+arr[ending];
            if(curr_sum > x && (ending-start+1)<min_len)
                min_len=ending-start+1;
        }
    }
    return min_len;
}
int main()
{
    int arr[]={1,4,45,6,10,19};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=51;
    int result=smallestsubsum(arr,n,x);
    if(result==n+1)
        cout<<"Not Possible!!";
    else
        cout<<result;
    return 0;

}
