#include <bits/stdc++.h>
using namespace std;

int bs1(vector<int> &v, int n, int x)
{
    int l = 0, h = n - 1, m, p1 = 0;
    while (l <= h)
    {
        m = (l + h) / 2;
        if (v[m] < x)
        {
            l = m + 1;
        }
        else if (v[m] > x)
        {
            h = m - 1;
        }
        else
        {
            p1 = m;
            h = m - 1;
        }
    }
    return p1;
}

int bs2(vector<int> &v, int n, int x)
{
    int l = 0, h = n - 1, m, p2 = -1;
    while (l <= h)
    {
        m = (l + h) / 2;
        if (v[m] < x)
        {
            l = m + 1;
        }
        else if (v[m] > x)
        {
            h = m - 1;
        }
        else
        {
            p2 = m;
            l = m + 1;
        }
    }
    return p2;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int q;
    cin >> q;
    vector<int> que(q);
    for (int i = 0; i < q; i++)
    {
        cin >> que[i];
    }
    for (int i = 0; i < q; i++)
    {
        cout << bs2(v, n, que[i]) - bs1(v, n, que[i]) + 1 << endl;
    }

    return 0;
}