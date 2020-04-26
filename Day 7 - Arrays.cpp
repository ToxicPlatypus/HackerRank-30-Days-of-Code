
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t,i;
    cin>>t;
    int arr[t];
    for(i=0;i<t;i++)
        cin>>arr[i];
    reverse(arr,arr+t);
    for(i=0;i<t;i++)
        cout<<arr[i]<<" ";


    return 0;
}
