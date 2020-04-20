
#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    int i2;
    double d2;
    string temp;

    getline(cin,temp);
    i2=stoi(temp);

    getline(cin,temp);
    d2=stod(temp);

    getline(cin,temp);

    cout<<i2+i<<endl;
    printf("%.1lf\n", d+d2);
    cout<<s+temp<<endl;



    return 0;
}
