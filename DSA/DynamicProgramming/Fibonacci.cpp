#include <bits/stdc++.h>
using namespace std;

// Recursion TC: O(2^N) & SC : O(N)
int recursionFibonacci(int n)
{
    if (n <= 1)
        return n;
    return recursionFibonacci(n - 1) + recursionFibonacci(n - 2);
}

// Memoization TC: O(N) & SC : O(N)+O(N)
int memoizationFibonacci(int n)
{
    vector<int> dp(n + 1, -1);
    if (n <= 1)
        return n;
    if (dp[n] != -1)
        return dp[n];
    dp[n] = memoizationFibonacci(n - 1) + memoizationFibonacci(n - 2);
    return dp[n];
}

// Tabulation TC: O(N) & SC : O(N)
int tabulationFibonaci(int n)
{
    vector<int> dp(n + 1);
    dp[0] = 0, dp[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n];
}

// Space Optimization TC: O(N) & SC : O(1)
int spaceOptimizationFibonacci(int n)
{
    int a = 0;
    int b = 1;
    for (int i = 2; i <= n; i++)
    {
        int c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main()
{
    int n = 5;
    // cout<<recursionFibonacci(n);
    // cout<<memoizationFibonacci(n);
    // cout<<tabulationFibonaci(n);
    cout << spaceOptimizationFibonacci(n);
    return 0;
}
