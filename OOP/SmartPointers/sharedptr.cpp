// helps us avoid calling new and delete

#include <bits/stdc++.h>
#include <memory>
using namespace std;

class UDT
{

public:
    UDT() { cout << "Created" << endl; }

    ~UDT() { cout << "Destroyed" << endl; }
};

int main()
{

    // creating one unique pointer
    shared_ptr<UDT> ptr1 = make_shared<UDT>();
    shared_ptr<UDT> ptr2 = ptr1;

    cout << "count: " << ptr2.use_count() << endl;

    return 0;
}

// when all owners are end of scope then the memory is free for other usage