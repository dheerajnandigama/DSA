#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {2, 1, 3, 2, 1, 5, 5, 6, 3};
    int n = v.size();
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        res = res ^ v[i];
    }

    cout << res << endl;
    return 0;
}