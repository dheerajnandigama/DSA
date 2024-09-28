#include <bits/stdc++.h>
using namespace std;

// int subArraySum(vector<int> &v)
// {
//   int n = v.size();
//   int ans = 0;
//   for (int i = 0; i < n; i++)
//   {
//     for (int j = i; j < n; j++)
//     {
//       int sum = 0;
//       for (int k = i; k <= j; k++)
//       {
//         sum += v[k];
//       }
//       ans += sum;
//     }
//   }
//   return ans;
// }

int subArraySum(vector<int> &v)
{
    int n = v.size();
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += v[j];
            ans += sum;
        }
    }
    return ans;
}

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    cout << subArraySum(v);
    return 0;
}