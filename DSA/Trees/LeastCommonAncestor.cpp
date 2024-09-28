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

Node *findLCA(Node *root, int u, int v)
{
    if (!root)
        return nullptr;

    if (u < root->data && v < root->data)
    {
        return findLCA(root->left, u, v);
    }

    if (u > root->data && v > root->data)
    {
        return findLCA(root->right, u, v);
    }

    return root;
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
        int n, q;
        cin >> n >> q;
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
        while (q--)
        {
            int u, v;
            cin >> u >> v;
            Node *lca = findLCA(root, u, v);
            cout << lca->data << " ";
        }
        cout << endl;
    }
    return 0;
}