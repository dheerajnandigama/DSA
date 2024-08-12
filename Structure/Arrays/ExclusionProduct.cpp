#include <bits/stdc++.h>
using namespace std;

const int M = 1e9 + 7;

vector<long long> prodExpectIt(vector<int> &v)
{
    int n = v.size();

    vector<long long> sol(n);
    vector<long long> pp(n);
    pp[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        pp[i] = (pp[i - 1] * v[i]) % M;
    }
    vector<long long> sp(n);
    sp[n - 1] = v[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        sp[i] = (sp[i + 1] * v[i]) % M;
    }
    sol[0] = sp[1];
    sol[n - 1] = pp[n - 2];
    for (int i = 1; i < n - 1; i++)
    {
        sol[i] = (pp[i - 1] * sp[i + 1]) % M;
    }
    return sol;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        vector<long long> ans = prodExpectIt(v);
        for (auto x : ans)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}