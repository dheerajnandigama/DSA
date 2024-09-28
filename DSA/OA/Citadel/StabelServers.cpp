#include <bits/stdc++.h>
using namespace std;

int countStableSegments(vector<int> &capacity)
{
    int n = capacity.size();
    vector<long long> prefixSum(n + 1, 0);
    for (int i = 0; i < n; ++i)
    {
        prefixSum[i + 1] = prefixSum[i] + capacity[i];
    }

    int stableSegments = 0;
    for (int l = 0; l < n - 2; ++l)
    {
        for (int r = l + 2; r < n; ++r)
        {
            long long interiorSum = prefixSum[r] - prefixSum[l + 1];
            if (capacity[l] == capacity[r] && capacity[l] == interiorSum)
            {
                stableSegments++;
            }
        }
    }

    return stableSegments;
}

int main()
{
    vector<int> capacity = {9, 3, 1, 2, 3, 9, 10};
    cout << countStableSegments(capacity) << endl;

    return 0;
}
