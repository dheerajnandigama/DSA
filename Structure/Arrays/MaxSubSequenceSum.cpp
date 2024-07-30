// Find the max subsequence sum of all subsequences
// Complexity : 2^N, 1

#include <bits/stdc++.h>
using namespace std;

int powerset(vector<int> nums, int n, int idx, int sm, int ans)
{
    int x = 0, y = 0;
    if (idx == n)
    {
        ans = max(sm, ans);
        return ans;
    }

    x = powerset(nums, n, idx + 1, sm + nums[idx], ans);
    y = powerset(nums, n, idx + 1, sm, ans);

    return max(x, y);
}

int main()
{
    vector<int> nums = {10, 2, 18, -5, 8, 12, 10, 7};
    int n = nums.size();
    int idx = 0;
    int sm = 0;
    int ans = INT_MIN;
    cout << powerset(nums, n, idx, sm, ans);
}