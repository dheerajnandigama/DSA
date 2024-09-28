#include<bits/stdc++.h>
using namespace std;

bool canVisitAllRooms(vector<vector<int>>& rooms) {
        unordered_set<int> visited;
        queue<int> q;
        q.push(0);
        visited.insert(0);
        while(!q.empty()){
            int curr = q.front();
            q.pop();
            visited.insert(curr);
            for(int neighbour:rooms[curr]){
                if(visited.count(neighbour) == 0){
                    q.push(neighbour);
                    visited.insert(neighbour);
                }
            }
        }
        return visited.size() == rooms.size();
    }

int main(){
    vector<vector<int>> rooms = {{1,3},{3,0,1},{2},{0}};
    cout<< canVisitAllRooms(rooms);
}