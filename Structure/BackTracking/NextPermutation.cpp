#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<char> v = {'a', 'b', 'c', 'd'};
    do
    {
        for (auto x : v)
        {
            cout << x << " ";
        }
        cout << endl;
    } while (next_permutation(v.begin(), v.end()));

    return 0;
}
