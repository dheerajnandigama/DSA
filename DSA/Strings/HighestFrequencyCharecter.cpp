#include<bits/stdc++.h>
using namespace std;

int main() {
    string s = "leetcode";
    vector<int> v(26,0);
    for(int i=0;i<s.length();i++){
        v[s[i]-'a']++;
    }
    int max=0;
    for(int i=0;i<26;i++){
        if(v[i]>max) max = v[i];
    }


   return 0;
}