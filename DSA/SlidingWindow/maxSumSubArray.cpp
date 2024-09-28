#include<bits/stdc++.h>
using namespace std;


int maxSumSubArray(vector<int> &v){
    int n=v.size();
    int k=3;
    int maxSum = INT_MIN;
    int maxIdx = 0;
    int prevSum = 0;
    for(int i=0;i<k;i++){
        prevSum += v[i];
    }
    maxSum = prevSum;
    int i=1;
    int j=k;
    while(j<n){
        int currSum = prevSum + v[j] - v[i-1];
        if(maxSum<currSum){
            maxSum = currSum;
            maxIdx=i;
        }
        prevSum = currSum;
        i++;
        j++;
    }
    return maxSum;
}

int main()
{ 
    vector<int> v = {7,1,2,5,8,4,9,6,3};
    cout<<maxSumSubArray(v);
    return 0;
}