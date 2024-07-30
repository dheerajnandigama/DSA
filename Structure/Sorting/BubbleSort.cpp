// swap the elements v[j] & v[j+1] n-1 times

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {-7, 11, -24, 3, 99, -62, 104};
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (v[j] > v[j + 1])
            {
                swap(v[j], v[j + 1]);
            }
        }
    }
    for (auto x : v)
    {
        cout << x << " ";
    }
    return 0;
}