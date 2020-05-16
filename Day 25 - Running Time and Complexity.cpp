#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    int t;
    cin>>t;
    while(t--)
    {
        long long int n, i, co=0;
        cin >> n;
            for(i=2; i*i<=n; i++)
            {
            if(n%i==0)
            {
                co=1;
                break;
            }
            }
            if(co==1 || n==1 || n==0)
                cout<<"Not prime"<<endl;
            else
                cout<<"Prime"<<endl;
    }
    return 0;
}
