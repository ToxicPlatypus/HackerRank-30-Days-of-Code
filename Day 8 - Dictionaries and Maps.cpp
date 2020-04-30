
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t,i;
    cin>>t;
    string name;
    map<string, int> phoneBook;

    for(i=0;i<t;i++){
        cin>>name;
        if(!phoneBook[name])
            cin>>phoneBook[name];
    }

    while(cin>>name){
        if(phoneBook[name])
            cout<<name<<"="<<phoneBook[name]<<endl;
        else
            cout<<"Not found"<<endl;
    }



    return 0;
}
