#include <bits/stdc++.h>
using namespace std;

template <typename T>
class Calculator
{
public:
    T add(T a, T b)
    {
        return a + b;
    }

    T subtract(T a, T b)
    {
        return a - b;
    }
};

int main()
{
    Calculator<int> calI;
    Calculator<float> calF;
    cout << calI.add(5, 6) << endl;
    cout << calF.subtract(5.3, 2.9) << endl;
    return 0;
}