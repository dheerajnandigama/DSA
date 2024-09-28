#include <bits/stdc++.h>
using namespace std;

int countPath(int s, int e)
{
    if (s == e)
        return 1;
    if (s > e)
        return 0;

    int count = 0;

    // i to 6 because dice has 6 faces
    for (int i = 1; i <= 6; i++)
    {
        count += countPath(s + i, e);
    }
    return count;
}

int main()
{
    int s = 0;
    int e = 3;
    cout << countPath(s, e);
    return 0;
}