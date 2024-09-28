#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> &nums, int &n, vector<bool> &isVisited, vector<int> &ans)
{
    if (ans.size() == n)
    {
        for (int num : ans)
        {
            cout << num << " ";
        }
        cout << endl;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (!isVisited[i])
        {
            isVisited[i] = true;
            ans.push_back(nums[i]);
            solve(nums, n, isVisited, ans);
            isVisited[i] = false;
            ans.pop_back();
        }
    }
}

int main()
{
    vector<int> nums = {1, 2, 3, 4};
    int n = nums.size();
    vector<int> ans;
    vector<bool> isVisited(n, false);

    solve(nums, n, isVisited, ans);
    return 0;
}
