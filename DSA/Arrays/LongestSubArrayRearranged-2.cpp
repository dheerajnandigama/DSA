// Find the longest subarray whose elements can be rearranged in a continuos order (input contains Duplicate)
// Complexity : N^2, N

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {-1, 4, 3, 2, 6, 5, 10, 18, 20, 19, -3, -2, 12, 15, 14, 13, 15, 16, 17, 5};
    int n = nums.size();
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        unordered_map<int, int> m;
        int a = nums[i], b = nums[i];
        for (int j = i; j < n; j++)
        {
            if (m.find(nums[j]) != m.end())
            {
                break;
            }
            m[nums[j]]++;
            a = min(a, nums[j]);
            b = max(b, nums[j]);
            if ((b - a + 1) == (j - i + 1))
            {
                ans = max(ans, j - i + 1);
            }
        }
    }
    cout << ans << endl;

    return 0;
}