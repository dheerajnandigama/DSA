#include <bits/stdc++.h>
using namespace std;

string moveAllX(string s)
{
    if (s.length() == 0)
        return "";
    char c = s[0];
    string ans = moveAllX(s.substr(1));
    if (c == 'x')
    {
        return ans + 'x';
    }
    return c + ans;
}

int main()
{
    string s = "axxbdxcefxhix";
    cout << moveAllX(s);
    return 0;
}