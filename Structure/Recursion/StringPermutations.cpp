#include <bits/stdc++.h>
using namespace std;

void stringPermutation(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << ans << endl;
        return;
    }
    for (int i = 0; i < s.size(); i++)
    {
        char c = s[i];
        string ros = s.substr(0, i) + s.substr(i + 1);

        stringPermutation(ros, ans + c);
    }
}

int main()
{
    string s = "ABCD";
    string ans = "";
    stringPermutation(s, ans);
    return 0;
}