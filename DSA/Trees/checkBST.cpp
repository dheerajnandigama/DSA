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

Node *buildTree(vector<int> &v, int n)
{
    if (n == 0)
        return nullptr;

    vector<Node *> nodes(n + 1, nullptr);

    // for 1-based indexing
    for (int i = 1; i <= n; i++)
    {
        nodes[i] = new Node(v[i - 1]);
    }

    for (int i = 1; i <= n; i++)
    {
        if (2 * i <= n)
        {
            nodes[i]->left = nodes[2 * i];
        }
        if (2 * i + 1 <= n)
        {
            nodes[i]->right = nodes[2 * i + 1];
        }
    }
    return nodes[1];
}

bool checkBST(Node *root, int x, int y)
{
    if (root == nullptr)
        return true;
    if (root->data <= x || root->data >= y)
    {
        return false;
    }
    return checkBST(root->left, x, root->data) && checkBST(root->right, root->data, y);
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
        Node *root = buildTree(v, n);
        if (checkBST(root, INT_MIN, INT_MAX))
        {
            cout << "True" << endl;
        }
        else
        {
            cout << "False" << endl;
        }
    }
    return 0;
}