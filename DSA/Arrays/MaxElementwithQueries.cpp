#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        vector<int> a(n, 0);
        int q;
        cin >> q;
        while (q--)
        {
            int i, j, x;
            cin >> i >> j >> x;
            a[i] = a[i] + x;
            if (j != n - 1)
            {
                a[j + 1] = a[j + 1] - x;
            }
        }
        for (int i = 1; i < n; i++)
        {
            a[i] = a[i - 1] + a[i];
        }
        for (int i = 0; i < n; i++)
        {
            a[i] = a[i] + v[i];
        }
        cout << *max_element(a.begin(), a.end()) << endl;
    }
    return 0;
}
