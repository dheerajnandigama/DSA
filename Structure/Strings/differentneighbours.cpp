#include<bits/stdc++.h>
using namespace std;


int main() {
    string s = "abbcdeffghh";
    int count = 0;
    if(s.size()==1) return 0;
    if(s[0]!=s[1]) count++;
    for(int i=1;i<s.size()-1;i++){
        if(s[i-1] != s[i] && s[i] != s[i+1]) count++;
    }
    if(s[s.size()-2] != s[s.size()-1]) count++;
    cout<<count;
    return 0;
}
