#include <bits/stdc++.h>
using namespace std;

vector<int> sortZerosAndOnes(vector<int> &v)
{
    int left = 0;
    int right = v.size() - 1;

    while (left < right)
    {
        if (v[left] == 0)
        {
            left++;
        }
        else if (v[right] == 1)
        {
            right--;
        }
        else
        {
            swap(v[left], v[right]);
            left++;
            right--;
        }
    }

    return v;
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

    vector<int> sol = sortZerosAndOnes(v);

    for (auto ele : sol)
    {
        cout << ele << " ";
    }
    cout << endl;

    return 0;
}
