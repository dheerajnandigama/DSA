#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> numbers;
    vector<int>::iterator it;
    int x;

    while (cin >> x && x != -1) {
        numbers.push_back(x);
    }

    for(it = numbers.begin(); it != numbers.end(); it++ )
    {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}