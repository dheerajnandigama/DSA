#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<vector<int>> v1 = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};

    int m = v1.size();
    int n = v1[0].size();

    vector<int> res;

    for(int i=0;i<m;i++){
            if(i %2 == 0){
                for(int j=0;j<n;j++){
                    cout<<v1[i][j]<<" ";
                }
        }
        else{
            for(int j=n-1;j>=0;j--){
                cout<<v1[i][j]<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}