#include <bits/stdc++.h>
using namespace std;

void interleavings(string s1, int n, string s2, int m, string s3, set<string> &result, int i1, int i2, int i3)
{

    if (i3 == m + n)
    {
        result.insert(s3);
        return;
    }

    if (i1 < n)
    {
        s3[i3] = s1[i1];
        interleavings(s1, n, s2, m, s3, result, i1 + 1, i2, i3 + 1);
    }
    if (i2 < m)
    {
        s3[i3] = s2[i2];
        interleavings(s1, n, s2, m, s3, result, i1, i2 + 1, i3 + 1);
    }
}

int main()
{
    int t;
    cin >> t;
    int k = 1;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        int n = s1.size();
        int m = s2.size();
        string s3(n + m, '\0');
        set<string> result;
        interleavings(s1, n, s2, m, s3, result, 0, 0, 0);

        cout << "Case #" << k << ":" << endl;
        for (auto x : result)
        {
            cout << x << endl;
        }

        k++;
    }
    return 0;
}