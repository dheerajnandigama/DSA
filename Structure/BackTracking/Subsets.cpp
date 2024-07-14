#include <bits/stdc++.h>
using namespace std;

void powerset(vector<int> nums, int n, int idx, vector<int> res, vector<vector<int>> &result)
{
    if (idx == n)
    {
        result.push_back(res);
        return;
    }
    powerset(nums, n, idx + 1, res, result);
    res.push_back(nums[idx]);
    powerset(nums, n, idx + 1, res, result);
}

int main()
{
    vector<int> nums = {1, 2, 3};
    int n = nums.size();
    vector<vector<int>> result;
    vector<int> res;
    int idx = 0;
    powerset(nums, n, idx, res, result);
    for (auto val : result)
    {
        for (auto x : val)
        {
            cout << x << " ";
        }
        cout << endl;
    }
}