#include <bits/stdc++.h>
using namespace std;

int firstMiss(vector<int> &v)
{
    int n = v.size();

    for (int i = 0; i < n; i++)
    {
        if (v[i] <= 0 || v[i] > n)
        {
            v[i] = n + 1;
        }
    }

    for (int i = 0; i < n; i++)
    {
        int num = abs(v[i]);
        if (num <= n)
        {
            v[num - 1] = -abs(v[num - 1]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (v[i] > 0)
        {
            return i + 1;
        }
    }

    return n + 1;
}

int main()
{
    vector<int> v = {5, 3, 7, 2, 5, 1, 4};
    cout << firstMiss(v);
    return 0;
}
