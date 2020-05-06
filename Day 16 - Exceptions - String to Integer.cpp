#include<bits/stdc++.h>

using namespace std;


int main(){
    string S;
    cin >> S;
    int i;
    try
    {
        i=stoi(S);
        cout<<i<<endl;
    }

    catch (...)
    {
        cout<<"Bad String"<<endl;
    }


    return 0;
}
