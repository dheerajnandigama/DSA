// Find the number of non-decreasing subsequences
// Complexity : 2^N, 1

#include <bits/stdc++.h>
using namespace std;

int powerset(vector<int> nums, int n, int idx, int prev)
{
    int x = 0, y = 0;
    if (idx == n)
    {
        return 1;
    }
    if (prev < nums[idx])
    {
        x = powerset(nums, n, idx + 1, nums[idx]);
    }
    y = powerset(nums, n, idx + 1, prev);

    return x + y;
}

int main()
{
    // vector<int> nums = {10, 2, 18, -5, 8, 12, 10, 7};
    vector<int> nums = {1, 2, 3, 4};
    int n = nums.size();
    int prev = INT_MIN;
    int idx = 0;
    cout << powerset(nums, n, idx, prev);
}