#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    int k = 7;
    int n = v.size();
    int l = 0;
    int h = n - 1;
    int m;
    while (l <= h)
    {
        m = (l + h) / 2;
        if (v[m] < k)
        {
            l = m + 1;
        }
        else if (v[m] > k)
        {
            h = m - 1;
        }
        else
        {
            cout << "Present";
            return 0;
        }
    }
    cout << "Not Present";
    return 0;
}