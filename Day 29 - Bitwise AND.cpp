#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n,k;
        cin>>n>>k;
        int bit,res=0,i,j;
        for(i=1; i<n;i++)
        {
             for(j=i+1; j<=n; j++)
            {
                bit=i&j;
                if(res < bit && bit < k)
                    res=bit;
            }
        }
        cout<<res<<endl;
    }
    return 0;
}
