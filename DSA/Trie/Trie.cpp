#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    Node *c[26];
    int cnt;
    Node()
    {
        for (int i = 0; i < 26; i++)
        {
            this->c[i] = nullptr;
        }
        this->cnt = 0;
    }
};

void add(Node *root, string w)
{
    for (char x : w)
    {
        int idx = x - 'a';
        if (root->c[idx] == nullptr)
        {
            root->c[idx] = new Node();
        }
        root = root->c[idx];
        root->cnt++;
    }
}

int find(Node *root, string w)
{
    for (char x : w)
    {
        int idx = x - 'a';
        if (root->c[idx] == nullptr)
        {
            return 0;
        }
        root = root->c[idx];
    }
    return root->cnt;
}

int main()
{
    Node *root = new Node();
    int n;
    cin >> n;
    while (n--)
    {
        string q;
        cin >> q;
        if (q == "add")
        {
            string w;
            cin >> w;
            add(root, w);
        }
        else if (q == "find")
        {
            string w;
            cin >> w;
            cout << find(root, w) << endl;
        }
    }
    return 0;
}
