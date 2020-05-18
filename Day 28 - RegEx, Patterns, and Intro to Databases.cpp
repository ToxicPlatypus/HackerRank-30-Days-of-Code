#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    list <string> name;
    while(t--)
    {
        string fname,email;

        cin >> fname >> email;

        if (regex_match (email, regex(".+@gmail.com") ))
            name.push_back(fname);
	}
        name.sort();

        for(auto & x : name)
            cout<<x<<endl;
    return 0;
}
