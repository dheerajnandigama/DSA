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

void leftView(Node *root)
{
    if (!root)
        return;

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        int n = q.size();

        for (int i = 0; i < n; i++)
        {
            Node *t = q.front();
            q.pop();

            if (i == 0)
            {
                cout << t->data << " ";
            }
            if (t->left)
                q.push(t->left);
            if (t->right)
                q.push(t->right);
        }
    }
}

int init = []
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();

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
        leftView(root);
        cout << endl;
    }
    return 0;
}