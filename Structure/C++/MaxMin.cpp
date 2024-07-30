#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {4, 2, 5, 9, 1};

    int max_e = *max_element(v.begin(), v.end());
    int min_e = *min_element(v.begin(), v.end());

    cout << max_e << endl;
    cout << min_e << endl;

    return 0;
}