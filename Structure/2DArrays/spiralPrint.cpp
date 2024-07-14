#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<vector<int>> v1 = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};

    int m = v1.size();
    int n = v1[0].size();

    int minr=0;
    int maxr=m-1;
    int minc=0;
    int maxc=n-1;
    while(minr<=maxr && minc<=maxc){
        //right
        for(int i= minc;i<=maxc;i++){
            cout<<v1[minr][i]<<" ";
        }
        minr++;
        //down
        for(int i=minr;i<=maxr;i++){
            cout<<v1[i][maxc]<<" ";
        }
        maxc--;
        //left
        for(int i=maxc ; i>=minc;i--){
            cout<<v1[maxr][i]<<" ";
        }
        maxr--;
        //up
        for(int i=maxr;i>=minr;i--){
            cout<<v1[i][minc]<<" ";
        }
        minc++;
    }

    return 0;
}