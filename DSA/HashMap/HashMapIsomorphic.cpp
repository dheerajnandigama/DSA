#include<bits/stdc++.h>
using namespace std;

bool isIsomorphic(string& s1,string& s2){
    if(s1.length()!=s2.length()) return false;

    unordered_map<char,char> m;
    for(int i=0;i<s1.length();i++){
        if(m.find(s1[i]) != m.end()){
            if(m[s1[i]]!=s2[i]){
                return false;
            }
        }
        else{
            m[s1[i]] = s2[i];
        }
    }

    m.clear();

    for(int i=0;i<s2.length();i++){
        if(m.find(s2[i]) != m.end()){
            if(m[s2[i]]!=s1[i]){
                return false;
            }
        }
        else{
            m[s2[i]] = s1[i];
        }
    }

    return true;
}

int main() {
    
    string s1,s2;
    cout<<"Enter two Strings:";
    cin>>s1>>s2;
    cout<<(isIsomorphic(s1,s2)? "Isomorphic" : "Not Isomorphic")<<endl;

    return 0;
}

 