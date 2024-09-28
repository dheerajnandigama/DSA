#include <bits/stdc++.h>
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

    // Create an object using a raw pointer

    MyClass *rawPtr = new MyClass();

    // Waiting for the user input
    cin.get();

    // Manually delete the object to invoke the destructor

    // To avoid memory leaks
    delete rawPtr;

    return 0;
}
