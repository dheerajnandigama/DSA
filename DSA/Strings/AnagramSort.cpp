#include<bits/stdc++.h>
using namespace std;

bool anagram(string s,string t){
     sort(s.begin(),s.end());
     sort(t.begin(),t.end());
     return s == t;
}

int main() {
    string s = "physicswallah";
    string t = "wallahphyscs";
    cout<<(anagram(s,t) ? "Anagram" : "Not Anagram");
   return 0;
}

 