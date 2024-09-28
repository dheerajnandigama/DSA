#include <bits/stdc++.h>
using namespace std;

class LRUCache
{
public:
    class Node
    {
    public:
        int key;
        int val;
        Node *prev;
        Node *next;

        Node(int key, int val)
        {
            this->key = key;
            this->val = val;
        }
    };

    Node *head = new Node(-1, -1);
    Node *tail = new Node(-1, -1);

    void addNode(Node *newnode)
    {
        Node *temp = head->next;

        newnode->next = temp;
        newnode->prev = head;

        head->next = newnode;
        temp->prev = newnode;
    }

    void deleteNode(Node *delnode)
    {
        Node *prevv = delnode->prev;
        Node *nextt = delnode->next;

        nextt->prev = prevv;
        prevv->next = nextt;
    }

    int cap;
    unordered_map<int, Node *> m;

    LRUCache(int capacity)
    {
        cap = capacity;
        head->next = tail;
        tail->prev = head;
    }

    int get(int key)
    {
        if (m.find(key) != m.end())
        {
            Node *resNode = m[key];
            int ans = resNode->val;

            m.erase(key);
            deleteNode(resNode);
            addNode(resNode);

            m[key] = head->next;
            return ans;
        }
        return -1;
    }

    void put(int key, int value)
    {
        if (m.find(key) != m.end())
        {
            Node *curr = m[key];
            m.erase(key);
            deleteNode(curr);
        }

        if (m.size() == cap)
        {
            m.erase(tail->prev->key);
            deleteNode(tail->prev);
        }

        addNode(new Node(key, value));
        m[key] = head->next;
    }

    // Function to return the current state of the cache
    vector<int> getCurrentCache()
    {
        vector<int> cacheContents;
        Node *temp = head->next;
        while (temp != tail)
        {
            cacheContents.push_back(temp->key);
            temp = temp->next;
        }
        return cacheContents;
    }
};

int main()
{
    int T;
    cin >> T; // Number of test cases

    while (T--)
    {
        int N, K;
        cin >> N >> K; // Number of pages and cache size

        LRUCache cache(K); // Initialize cache with capacity K

        for (int i = 0; i < N; ++i)
        {
            int page;
            cin >> page;
            cache.put(page, 1); // Insert the page into the cache (value is irrelevant here)
        }

        // Get and print the final state of the cache
        vector<int> finalCache = cache.getCurrentCache();
        for (int i = 0; i < finalCache.size(); ++i)
        {
            cout << finalCache[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
