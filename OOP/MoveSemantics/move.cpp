// Transfering the owneership of one obj to other obj

#include <bits/stdc++.h>
using namespace std;

void call(string &s1, string &s2)
{
    cout << "s1 : " << s1 << endl;
    cout << "s2 : " << s2 << endl;
}

int main()
{

    string s1 = "I am alone";
    string s2;

    // call(s1,s2);

    s2 = std::move(s1);

    call(s1, s2);

    // s2 = s1;

    // call(s1, s2);

    return 0;
}