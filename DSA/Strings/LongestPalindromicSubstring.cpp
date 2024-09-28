// Complexity : N^2,1

#include <bits/stdc++.h>
using namespace std;

int longest_pal_substring(string &s, int &n)
{
    int len = 1;
    for (int i = 0; i < n; i++)
    {
        // Odd Case
        int p1 = i - 1, p2 = i + 1;
        while (p1 != -1 && p2 != n && s[p1] == s[p2])
        {
            p1--;
            p2++;
        }
        len = max(len, p2 - p1 - 1);

        // Even Case
        p1 = i - 1, p2 = i;
        while (p1 != -1 && p2 != n && s[p1] == s[p2])
        {
            p1--;
            p2++;
        }
        len = max(len, p2 - p1 - 1);
    }
    return len;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << longest_pal_substring(s, n) << endl;
    }
    return 0;
}