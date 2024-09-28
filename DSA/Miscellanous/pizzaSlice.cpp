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
        if (n & (n - 1) == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            int msbPosition = static_cast<int>(log2(n));
            int mask = (1 << msbPosition) - 1;
            int ans = n & mask;
            cout << (2 * ans) << endl;
        }
    }
}
