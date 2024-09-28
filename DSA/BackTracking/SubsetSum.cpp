#include <bits/stdc++.h>
using namespace std;

bool subsetSum(vector<int> &v, int n, int k, int sum, int idx)
{

    if (idx == n)
    {
        return sum == k;
    }

    return subsetSum(v, n, k, sum + v[idx], idx + 1) || subsetSum(v, n, k, sum, idx + 1);
}

int main()
{
    vector<int> v = {12, 5, -3, 18, 10};
    int n = v.size();
    int k = 18;
    int sum = 0;
    int idx = 0;
    cout << subsetSum(v, n, k, sum, idx);
    return 0;
}