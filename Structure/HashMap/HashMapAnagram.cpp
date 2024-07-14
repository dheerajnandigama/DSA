#include<bits/stdc++.h>
using namespace std;

bool checkAnagram(string& s1,string& s2){
    unordered_map<char,int> m;
    for(auto c:s1){
        m[c]++;
    }

    for(auto e:s2){
        if(m.find(e)==m.end()){
            return false;
        }
        else{
        m[e]--;
    }

    for(auto x:m){
        if(x.second != 0){
            return false;
        }
    }
    return true;
}

int main() {
    
    string s1,s2;
    cout<<"Enter two Strings:";
    cin>>s1>>s2;
    cout<<(checkAnagram(s1,s2)? "Anagram" : "Not Anagrams")<<endl;

    return 0;
}