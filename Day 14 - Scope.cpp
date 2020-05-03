#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;

  	public:
  	int maximumDifference;

  	Difference(vector<int>numbers):elements(numbers){}

  	void computeDifference()
  	{
  	    int x=elements.size();
  	    sort(elements.begin(),elements.end());
  	    maximumDifference = abs(elements.at(0)-elements.at(x-1));
  	}
};

int main() {
    int N;
    cin >> N;

    vector<int> a;

    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;

        a.push_back(e);
    }

    Difference d(a);

    d.computeDifference();

    cout << d.maximumDifference;

    return 0;
}
