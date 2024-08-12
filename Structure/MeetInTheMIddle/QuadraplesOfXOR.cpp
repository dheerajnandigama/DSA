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
        vector<int> v1(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v1[i];
        }
        vector<int> v2(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v2[i];
        }
        vector<int> v3(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v3[i];
        }
        vector<int> v4(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v4[i];
        }

        unordered_map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                m[v1[i] ^ v2[j]]++;
            }
        }

        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                int k = v3[i] ^ v4[j];
                if (m.find(k) != m.end())
                {
                    ans += m[k];
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
