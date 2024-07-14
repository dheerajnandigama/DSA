#include <bits/stdc++.h>
using namespace std;

void substrings(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << "{" << ans << "}" << endl;
        return;
    }

    char c = s[0];
    string ros = s.substr(1);
    substrings(ros, ans);
    substrings(ros, ans + c);
}

int main()
{
    string s = "ABC";
    string ans = "";
    substrings(s, ans);
    return 0;
}