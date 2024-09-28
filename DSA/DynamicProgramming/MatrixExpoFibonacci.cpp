#include <bits/stdc++.h>
using namespace std;

const int M = 1e9 + 7;

void multiply(long long F[2][2], long long M[2][2])
{
    long long x = (F[0][0] * M[0][0] + F[0][1] * M[1][0]) % M;
    long long y = (F[0][0] * M[0][1] + F[0][1] * M[1][1]) % M;
    long long z = (F[1][0] * M[0][0] + F[1][1] * M[1][0]) % M;
    long long w = (F[1][0] * M[0][1] + F[1][1] * M[1][1]) % M;

    F[0][0] = x;
    F[0][1] = y;
    F[1][0] = z;
    F[1][1] = w;
}

void power(long long F[2][2], long long n)
{
    if (n == 0 || n == 1)
        return;

    long long M[2][2] = {{1, 1}, {1, 0}};

    power(F, n / 2);
    multiply(F, F);

    if (n % 2 != 0)
        multiply(F, M);
}

long long fibo(long long n)
{
    if (n == 0)
        return 0;

    long long F[2][2] = {{1, 1}, {1, 0}};
    power(F, n - 1);

    return F[0][0];
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        cout << fibo(n) << endl;
    }
    return 0;
}