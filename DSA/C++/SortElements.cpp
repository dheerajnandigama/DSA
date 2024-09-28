#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {4, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + 3);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    //------------------------------------------

    sort(arr, arr + 3, greater<int>());

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    //------------------------------------------

    vector<int> v = {4, 2, 1};
    n = v.size();
    sort(v.begin(), v.end());
    for (auto x : v)
    {
        cout << x << " ";
    }
    cout << endl;

    //------------------------------------------

    sort(v.begin(), v.end(), greater<int>());
    for (auto x : v)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}