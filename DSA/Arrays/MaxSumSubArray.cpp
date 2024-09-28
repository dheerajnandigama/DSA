// Find maximum sum of subarrays

#include <bits/stdc++.h>
using namespace std;

// Complexity : N^3,1

int main()
{
    vector<int> v = {5, 8, -15, 2, 7, -3, 5, 4, 9, -35, 8, 2, 4};
    int n = v.size();
    int ans = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int s = 0;
            for (int k = i; k <= j; k++)
            {
                s = s + v[k];
            }
            ans = max(ans, s);
        }
    }
    cout << ans << endl;

    return 0;
}

// Complexity : N^2,1

int main()
{
    vector<int> v = {5, 8, -15, 2, 7, -3, 5, 4, 9, -35, 8, 2, 4};
    int n = v.size();
    int ans = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int s = 0;
        for (int j = i; j < n; j++)
        {
            s = s + v[j];
            ans = max(ans, s);
        }
    }
    cout << ans << endl;

    return 0;
}