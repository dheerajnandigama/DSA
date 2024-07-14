#include<bits/stdc++.h>
using namespace std;


int main() {
    
    vector<int> v = {9,10,2,3,5};
    int target = 15;
    vector<int> ans;
    unordered_map<int,int> m;
    for(int i=0;i<v.size();i++){
        if(m.find(target - v[i]) != m.end()){
            ans.push_back(m[target-v[i]]);
            ans.push_back(i);
        }
        else{
            m[v[i]] = i;
        }
    }

    for(auto ele:ans){
        cout<<ele<<" ";
    }
    cout<<endl;

    return 0;
}

 