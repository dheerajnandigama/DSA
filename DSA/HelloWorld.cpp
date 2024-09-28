#include <bits/stdc++.h>
#include <memory>
using namespace std;

class MyClass
{
public:
    MyClass()
    {
        cout << "Constructor invoked" << endl;
    }
    ~MyClass()
    {
        cout << "Destructor invoked" << endl;
    }
};

int main()
{
    {
    }
    unique_ptr<MyClass> unPtr1 = make_unique<MyClass>();

    // waiting for the user input

    // cin.get();
}