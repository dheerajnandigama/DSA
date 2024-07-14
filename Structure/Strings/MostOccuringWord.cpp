#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<string> v;
    string s = "hey what is your hey is name";
    stringstream ss(s);
    string temp;
    while(ss>>temp){
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    int count=0;
    int maxCount=0;
    for(int i=1;i<v.size();i++){
        if(v[i]== v[i-1]) count++;
        else count = 1;
        maxCount = max(maxCount,count);
    }

    count =1;
    for(int i=1;i<v.size();i++){
        if(v[i]== v[i-1]) count++;
        else count = 1;
       if(count == maxCount){
        cout<<v[i]<<" "<<maxCount<<endl;
       }
    }
    
return 0;
}

------------------------------------------------

#include<bits/stdc++.h>
using namespace std;


int main() {
    unordered_map<string,int> m;
    string s = "hey what is your hey is name";
    stringstream ss(s);
    string temp;
    while(ss>>temp){
        m[temp]++;
    }
    int x = 0;
    for(auto c:m){
        x = max(x,c.second);
    }
    for(auto e:m){
        if(e.second == x){
            cout<<e.first<<" ";
        }
    }

return 0;
}
