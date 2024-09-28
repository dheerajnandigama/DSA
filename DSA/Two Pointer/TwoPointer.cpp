#include <bits/stdc++.h>
using namespace std;

vector<int> sortZerosAndOnes(vector<int> &v)
{
    int left = 0;
    int right = v.size() - 1;
    vector<int> ans;

    while (left <= right)
    {
        if (abs(v[left]) < abs(v[right]))
        {
            ans.push_back(v[right] * v[right]);
            right--;
        }
        else
        {
            ans.push_back(v[left] * v[left]);
            left++;
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        v.push_back(ele);
    }

    vector<int> sol = sortZerosAndOnes(v);

    for (auto ele : sol)
    {
        cout << ele << " ";
    }
    cout << endl;

    return 0;
}