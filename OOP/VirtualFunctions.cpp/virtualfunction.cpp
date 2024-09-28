#include <bits/stdc++.h>
using namespace std;

class Instrument
{
public:
    virtual void makeSound()
    {
        cout << "Instrument playing...\n";
    }
};

class Piano : public Instrument
{
public:
    void makeSound()
    {
        cout << "Piano playing...\n";
    }
};

int main()
{

    Instrument *i1 = new Piano();
    i1->makeSound();

    return 0;
}