// Find number of distinct elements from subarrays of size k
// Complexity : N,K

#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> nums = {10, 8, 3, 15, 3, 15, 10, 10, 8, 2};
  int n = nums.size();
  int window_size = 4;

  unordered_map<int, int> m;

  for (int i = 0; i < n; i++)
  {
    m[nums[i]]++;

    if (i >= window_size)
    {
      if (m[nums[i - window_size]] == 1)
      {
        m.erase(nums[i - window_size]);
      }
      else
      {
        m[nums[i - window_size]]--;
      }
    }

    if (i >= window_size - 1)
    {
      cout << m.size() << endl;
    }
  }

  return 0;
}