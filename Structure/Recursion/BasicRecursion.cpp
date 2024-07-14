#include <bits/stdc++.h>
using namespace std;

int sum(int n)
{
    if (n == 0)
        return 0;
    return n + sum(n - 1);
}

int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

int power(int a, int b)
{
    if (b == 0)
        return 1;
    return a * power(a, b - 1);
}

int fib(int n)
{
    if (n == 0 || n == 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int n = 4;
    int a = 2;
    int b = 5;
    cout << sum(n) << endl;
    cout << factorial(n) << endl;
    cout << power(a, b) << endl;
    cout << fib(n) << endl;
    return 0;
}