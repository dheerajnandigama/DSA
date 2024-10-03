#include <iostream>
#include <vector>
#include <stack>
using namespace std;

string findSmallestSequence(string pattern)
{
    int n = pattern.size();
    vector<int> result;
    stack<int> st;
    for (int i = 0; i <= n; ++i)
    {
        st.push(i + 1);

        if (i == n || pattern[i] == 'S')
        {

            while (!st.empty())
            {
                result.push_back(st.top());
                st.pop();
            }
        }
    }

    string smallestSequence;
    for (int num : result)
    {
        smallestSequence += to_string(num);
    }

    return smallestSequence;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        string pattern;
        cin >> pattern;
        cout << findSmallestSequence(pattern) << endl;
    }
    return 0;
}
