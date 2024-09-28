#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 3, 4, 5, 6};

    int ele = 4;

    auto it = find(v.begin(), v.end(), ele);

    if (it != v.end())
    {
        v.erase(it);
    }

    for (auto x : v)
    {
        cout << x << " ";
    }

    return 0;
}