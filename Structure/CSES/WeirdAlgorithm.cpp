#include <bits/stdc++.h>
using namespace std;

vector<int> WeirdAlgorithm(long long int n)
{
    vector<int> ans;
    ans.push_back(n);
    while (n >= 1)
    {
        if (n % 2 == 0)
        {
            n /= 2;
            ans.push_back(n);
        }
        else if (n != 1 && n % 2 == 1)
        {
            n = (3 * n) + 1;
            ans.push_back(n);
        }
        else{
            break;
        }
    }
    return ans;
}

int main()
{
    long long int n;
    cin >> n;
    vector<int> sol = WeirdAlgorithm(n);
    for(auto i:sol){
        cout<<i<<" ";
    }
    return 0;
}