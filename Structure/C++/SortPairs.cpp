#include <bits/stdc++.h>
using namespace std;

bool sortbysec(const pair<int, int> &a, const pair<int, int> &b)
{
    return (a.second < b.second);
}

int main()
{

    vector<pair<int, int>> vec = {{10, 3}, {20, 1}, {30, 2}};

    sort(vec.begin(), vec.end(), sortbysec);

    for (int i = 0; i < 3; i++)
    {
        cout << vec[i].first << " " << vec[i].second << "\n";
    }

    return 0;
}