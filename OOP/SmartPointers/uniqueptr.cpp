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
    unique_ptr<UDT> u = unique_ptr<UDT>(new UDT);

    // we are allowed to move a unique pointer
    unique_ptr<UDT> m = std::move(u);

    // unique_ptr<UDT[]> u_array = unique_ptr<UDT[]>(new UDT[5]);

    unique_ptr<UDT[]> u_array = make_unique<UDT[]>(5);

    return 0;
}

/*

We cannot share pointer - no copies are allowed
We dont delete , it deletes within the blockscope

*/