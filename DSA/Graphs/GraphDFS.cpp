#include<bits/stdc++.h>
using namespace std;

void dfsG(int curr,vector<vector<int>>& adj, vector<int> &visited, vector<int> &dfs){
    visited[curr] = 1;
    dfs.push_back(curr);
    for(auto neighbour:adj[curr]){
        if(!visited[neighbour]){
            dfsG(neighbour,adj,visited,dfs);
        }
    }
}

vector<int> dfsOfGraph(vector<vector<int>>& adj){
    vector<int> visited(adj.size()+1, 0);
    int start=1;
    vector<int> dfs;
    dfsG(start,adj,visited,dfs);
    return dfs;
}

int main(){
    vector<vector<int>> adj = {{},{2,3},{1,5,6},{1,4,7},{3,8},{2},{2},{3,8},{4,7}};
    vector<int> res = dfsOfGraph(adj);
    for(auto e : res){
        cout << e << " ";
    }
    return 0;
}