#include <bits/stdc++.h>

using namespace std;

int main()
{
    long int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    int count=0,res=0;

    while(n>0)
    {
        if(n%2==1)
        {
            count++;
            if(count>res)
                res=count;
        }
        else
            count=0;
        n/=2;

    }
    cout<<res<<endl;
    return 0;
}
