#include<bits/stdc++.h>
using namespace std;

vector<int> bfsOfGraph(vector<vector<int>>& adj){
    vector<int> visited(adj.size()+1, 0);
    queue<int> q;
    q.push(1);
    visited[1] = 1;
    vector<int> bfs;
    while(!q.empty()){
         int curr = q.front();
         q.pop();
         bfs.push_back(curr);
         for(auto neighbour : adj[curr]){
            if(!visited[neighbour]){
                q.push(neighbour);
                visited[neighbour] = 1;
            }
         } 
    }
    return bfs;
}


int main(){
    vector<vector<int>> adj = {{},{2,6},{1,3,4},{2},{2,5},{4,7},{1,7,8},{5,6},{6}};
    vector<int> res = bfsOfGraph(adj);
    for(auto e : res){
        cout << e << " ";
    }
    return 0;
}
