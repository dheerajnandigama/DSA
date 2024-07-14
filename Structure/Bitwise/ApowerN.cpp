#include <bits/stdc++.h>
using namespace std;
long long power(long long a, long long n)
{
    long long ans = 1;
    long long x = a;

    while (n > 0)
    {
        if (n & 1)
        {
            ans = ans * x;
        }
        x = x * x;
        n = n >> 1;
    }

    return ans;
}

int main()
{
    long long a, b;
    cout << power(2, 5);
    return 0;
}
