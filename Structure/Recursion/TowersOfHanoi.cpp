#include <bits/stdc++.h>
using namespace std;

void TOH(int n, char src, char dest, char tmp)
{
    if (n == 0)
        return;
    TOH(n - 1, src, tmp, dest);
    cout << "Move disk-" << n << " from " << src << " to " << dest << endl;
    TOH(n - 1, tmp, dest, src);
}

int main()
{
    char A = 'A';
    char B = 'B';
    char C = 'C';
    TOH(3, A, C, B);
    return 0;
}