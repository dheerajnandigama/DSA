#include<bits/stdc++.h>
using namespace std;

// memoization TC: O(2^N) & SC : O(N)
int recursionFibonacci(int n){
    if(n<=1) return n;
    return recursionFibonacci(n-1) + recursionFibonacci(n-2);
}    

// memoization TC: O(N) & SC : O(N)+O(N)
int memoizationFibonacci(int n){
    vector<int>dp(n+1,-1);
     if(n<=1) return n;
     if(dp[n] != -1) return dp[n];
     dp[n] = memoizationFibonacci(n-1) + memoizationFibonacci(n-2);
     return dp[n];
}

// memoization TC: O(N) & SC : O(N)
int tabulationFibonaci(int n){
    vector<int>dp(n+1,-1);
    dp[0]=0,dp[1]=1;
    for(int i=2;i<=n;i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];
}

// memoization TC: O(N) & SC : O(1)
int spaceOptimizationFibonacci(int n){
    int prev2 = 0;
    int prev1 = 1;
    for(int i=2;i<=n;i++){
        int curr = prev1 + prev2;
        prev2 = prev1;
        prev1 = curr;
    }
    return prev1;
}

int main() {
    int n = 5;
    // cout<<recursionFibonacci(n);
    // cout<<memoizationFibonacci(n);
    // cout<<tabulationFibonaci(n);
    cout<<spaceOptimizationFibonacci(n);
    return 0;
}
