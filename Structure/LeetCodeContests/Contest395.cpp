#include <bits/stdc++.h>
using namespace std;

long long sumofArr(vector<int> &v){
    long long sum = 0;
    for(auto e : v){
        sum += e;
    }
    return sum;
}

int addedInteger(vector<int> &nums1, vector<int> &nums2){
    if(nums1.size() != nums2.size()) return 0;
    
    long long sum_diff = sumofArr(nums2) - sumofArr(nums1);
    double ans_double = static_cast<double>(sum_diff) / nums1.size();
    int ans = static_cast<int>(round(ans_double));
    return ans;
}

int main() {
    vector<int> nums1 = {1,1,1,1};
    vector<int> nums2 = {1,1,1,1};
    cout << addedInteger(nums1, nums2);
    return 0;
}
