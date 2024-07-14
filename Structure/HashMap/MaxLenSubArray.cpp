#include<bits/stdc++.h>
using namespace std;

int maxLengthZeroSumSubarray(vector<int>& v){
    unordered_map<int,int> m;
    int prefixSum = 0;
    int maxLength = INT_MIN;
    for (int i=0;i<v.size();i++){
        prefixSum += v[i];
        if(prefixSum==0){
            maxLength++;
        }

        if(m.find(prefixSum) != m.end()){
            maxLength = max(maxLength, i - m[prefixSum]);
        }
        else{
            m[prefixSum] = i;
        }
    }
    return maxLength;
}

int main() {
    vector<int> v = {15,-2,2,-8,1,7,10,23};

    cout<<maxLengthZeroSumSubarray(v)<<endl;
    return 0;
}

 