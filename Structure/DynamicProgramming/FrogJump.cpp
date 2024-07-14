#include<bits/stdc++.h>
using namespace std;

int frogJumpM(vector<int> &v,int n,vector<int> &dp){
    if(n==0) return 0;
    if(dp[n] != -1) return dp[n];
     int left = frogJumpM(v,n-1,dp) + abs(v[n] - v[n-1]);
     int right = INT_MAX;
     if(n>1) right = frogJumpM(v,n-2,dp) + abs(v[n] - v[n-2]);
    return dp[n] = min(left,right);
}

int frogJumpT(vector<int> &v,int n,vector<int> &dp){
   dp[0]=0;
    for(int i=1;i<n;i++){
        int left = dp[i-1] + abs(v[i] - v[i-1]);
        int right = INT_MAX;
        if(i>1) right = dp[i-2] + abs(v[i] - v[i-2]);
        dp[i] = min(left,right);
    }
    return dp[n-1];
}

int main() {
    vector<int> v = {30,10,60,10,60,50};
    int n = v.size();
    vector<int> dp(n,0);
    cout<<frogJumpT(v,n,dp);
    return 0;
}
