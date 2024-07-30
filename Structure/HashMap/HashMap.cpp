#include <bits/stdc++.h>
using namespace std;

void display(unordered_map<int, char> &m)
{
    for (const auto &x : m)
    {
        cout << x.first << " " << x.second << endl;
    }
    return;
}

int main()
{
    // Initialization - 1 :
    unordered_map<int, char> m = {{1, 'a'}, {2, 'b'}, {3, 'c'}};

    // Initialization - 2 :
    m[4] = 'd';

    // Initialization - 3 :
    m.insert({5, 'e'});

    // Initialization - 4 :
    m.insert({{6, 'f'}, {7, 'g'}});

    // Access Values - 1 :
    m[5];

    // Access Values - 2 :
    m.at(5);

    // Changing Values - 1:
    m[6] = '6';

    // Changing Values - 2:
    m.at(7) = '7';

    // Remove Elements
    m.erase(1);

    // Check if element exist - 1:
    if (m.find(9) != m.end())
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }

    // Check if element exist - 2:
    if (m.count(6))
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }

    // Size of Map :
    cout << m.size() << endl;

    // Clear in Map :
    m.clear();

    // empty() in Map :
    if (m.empty())
    {
        cout << "Empty" << endl;
    }
    else
    {
        cout << "Not Empty" << endl;
    }

    return 0;
}
