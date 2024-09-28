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
        int final = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            final |= v[i];
        }
        int k = final & ~(final + 1);
        int c = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] > k)
            {
                c++;
            }
        }
        cout << c << endl;
    }
    return 0;
}
