
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char arr[100000];
    cin>>arr;
    int len=strlen(arr);
    char a[10000],b[10000];
    int i,j,x=0,y=0;
    for(i=0;i<len;i++)
    {
        if(i%2==0)
        {
            a[x]=arr[i];x++;
        }
        else
        {
            b[y]=arr[i];y++;
        }
    }

    for(i=0;i<x;i++)
        cout<<a[i];
    cout<<" ";
    for(i=0;i<y;i++)
        cout<<b[i];
    cout<<endl;
    }

    return 0;
}
