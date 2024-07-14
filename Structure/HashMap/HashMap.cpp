#include<bits/stdc++.h>
using namespace std;

int main() {
   
    vector<string> s1 = {"wall","ah","wallahah"};
    vector<string> s2 = {"collegeee","coll","collegge"};

    unordered_map<char,int> m;

    for(auto str : s1){
        for(char c : str){
            m[c]++;
        }
    }

    for(auto ele : m){
        if(ele.second % s1.size() != 0){
            cout<<"Not possible";
        }
    }

    cout<<"Possible";
    
    return 0;
}