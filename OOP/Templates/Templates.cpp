#include <bits/stdc++.h>
using namespace std;

int addInt(int a, int b)
{
    return a + b;
}

float addFloat(float a, float b)
{
    return a + b;
}

template <typename T>

T add(T a, T b)
{
    return a + b;
}

int main()
{
    cout << add(5, 7) << endl;
    cout << add(5.3, 7.7) << endl;
    return 0;
}