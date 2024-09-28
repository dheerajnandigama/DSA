#include <bits/stdc++.h>
using namespace std;

vector<string> keypadList = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

void keypad(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << ans << endl;
        return;
    }

    char ch = s[0];
    string code = keypadList[ch - '0'];
    string ros = s.substr(1);

    for (int i = 0; i < code.size(); i++)
    {
        keypad(ros, ans + code[i]);
    }
}

int main()
{
    string s = "23";
    string ans = "";
    keypad(s, ans);

    return 0;
}