#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int> &v)
{
    int n = v.size();
    for (int i = 0; i < n - 1; i++)
    {
        int iMin = i;
        for (int j = i + 1; j < n; j++)
        {
            if (v[j] < v[iMin])
            {
                iMin = j;
            }
        }
        swap(v[iMin], v[i]);
    }
    for (auto x : v)
    {
        cout << x << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    selectionSort(v);
    return 0;
}