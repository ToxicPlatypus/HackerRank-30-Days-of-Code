#define ll long long
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int d,m,y,dd,mm,yy;

    cin>>d>>m>>y;
    cin>>dd>>mm>>yy;

    if(y>yy)
        cout<<"10000"<<endl;

    else if(y==yy && m>mm)
        cout<<500*(m-mm)<<endl;

    else if(y==yy && m==mm && d>dd)
        cout<<15*(d-dd)<<endl;

    else
        cout<<"0"<<endl;

    return 0;
}
