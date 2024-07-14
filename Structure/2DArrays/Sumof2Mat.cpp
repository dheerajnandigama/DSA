#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<int>> v1 = {{1,1,1},{1,1,1}};
   vector<vector<int>> v2 = {{2,2,2},{2,2,2}};
    if(v1.size() != v2.size() || v1[1].size() != v2[1].size()){
        cout<<"Invalid"<<endl;
    } 
   vector<vector<int>> v3(v1.size(), vector<int>(v1[0].size(), 0));
    for(int i=0;i<v1.size();i++){
        for(int j=0;j<v1[0].size();j++){
            v3[i][j] = v1[i][j] + v2[i][j];
        }
    }

    for(int i=0;i<v3.size();i++){
        for(int j=0;j<v3[0].size();j++){
            cout<< v3[i][j]<<" ";
        }
        cout<< endl;
    }
    cout<< endl;

   return 0;
}

 