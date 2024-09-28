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
    int code = c;
    string ros = s.substr(1);
    substrings(ros, ans);
    substrings(ros, ans + c);
    substrings(ros, ans + to_string(code));
}

int main()
{
    string s = "AB";
    string ans = "";
    substrings(s, ans);
    return 0;
}