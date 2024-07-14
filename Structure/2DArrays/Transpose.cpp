#include <bits/stdc++.h>
using namespace std;

void display(vector<vector<int>>& v){
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[0].size();j++){
            cout<< v[i][j]<<" ";
        }
        cout<<endl;
    } 
}

int main()
{
    vector<vector<int>> v = {{1,2,3},{4,5,6},{7,8,9}};

    display(v);

    for(int i=0;i<v.size()-1;i++){
        for(int j=i+1;j<v[0].size();j++){
            int temp;
            temp = v[i][j];
            v[i][j] = v[j][i];
            v[j][i] = temp;
        }
    }
    cout<<"--------------------"<<endl;
    display(v);

    return 0;
}