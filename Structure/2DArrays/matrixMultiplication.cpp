#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<vector<int>> v1 = {{1,2},{3,4},{5,6},{7,8}};
    vector<vector<int>> v2 = {{1,2,3,4},{5,6,7,8}};

    int m = v1.size();
    int n = v1[0].size();

    int p = v2.size();
    int q = v2[0].size();

    vector<vector<int>> res(m,vector<int>(q));

    if(n != p){
        cout<<"Not Possible";
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            res[i][j] = 0;
            for(int k=0;k<n;k++){
                res[i][j] += v1[i][k] * v2[k][j];
            }
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}