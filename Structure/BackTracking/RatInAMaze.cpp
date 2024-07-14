#include <bits/stdc++.h>
using namespace std;

bool isSafe(vector<vector<int>> &maze, int x, int y, int n)
{
    if (x < n && y < n && maze[x][y] == 1)
    {
        return true;
    }
    return false;
}

bool ratinMaze(vector<vector<int>> &maze, int x, int y, int n, vector<vector<int>> &sol)
{
}

int main()
{
    int n = 6;
    int x = 0;
    int y = 0;
    vector<vector<int>> maze(n);
    vector<vector<int>> sol(n);
    return 0;
}
