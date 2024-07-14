#include <bits/stdc++.h>
using namespace std;

void possibleParantheses(vector<char> &s, int N, int idx, int open, int close)
{

    if (idx == N)
    {
        for (auto x : s)
        {
            cout << x;
        }
        cout << endl;
        return;
    }

    if (open < N / 2)
    {
        s[idx] = '{';
        possibleParantheses(s, N, idx + 1, open + 1, close);
    }

    if (close < open)
    {
        s[idx] = '}';
        possibleParantheses(s, N, idx + 1, open, close + 1);
    }
}

int main()
{
    int n = 3;
    int N = 2 * n;
    vector<char> s(N);
    int idx = 0;
    int open = 0;
    int close = 0;
    possibleParantheses(s, N, idx, open, close);

    return 0;
}