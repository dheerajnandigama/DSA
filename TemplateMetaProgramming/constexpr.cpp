// using constexpr specifier it is possible to evaluate the value of a function or variable at compile time.

#include <bits/stdc++.h>
using namespace std;

constexpr int add(int a, int b)
{
    return a + b;
}

int main()
{

    constexpr int i = add(7, 16);

    cout << i << endl;
}