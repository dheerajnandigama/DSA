#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int d)
    {
        data = d;
        left = nullptr;
        right = nullptr;
    }
};

Node *insert(Node *root, int k)
{
    if (root == nullptr)
        return new Node(k);
    if (k < root->data)
    {
        root->left = insert(root->left, k);
    }
    else if (k > root->data)
    {
        root->right = insert(root->right, k);
    }
    return root;
}

void zigzagTrav(Node *root)
{
    if (root == nullptr)
        return;
    queue<Node *> q;
    q.push(root);
    bool ltr = false;

    while (!q.empty())
    {
        int sz = q.size();
        vector<int> row(sz);
        for (int i = 0; i < sz; i++)
        {
            Node *t = q.front();
            q.pop();

            int idx = (ltr) ? i : (sz - 1 - i);
            row[idx] = t->data;
            if (t->left)
                q.push(t->left);
            if (t->right)
                q.push(t->right);
        }
        for (auto x : row)
        {
            cout << x << " ";
        }

        ltr = !ltr;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        Node *root = nullptr;
        for (auto x : v)
        {
            root = insert(root, x);
        }
        zigzagTrav(root);
        cout << endl;
    }
    return 0;
}