#include <bits/stdc++.h>
using namespace std;

// The class that has atleast one pure virtual function is Abstract class

class Instrument
{
public:
    // This is pure virtual function

    virtual void makeSound() = 0;
};

class Piano : public Instrument
{
public:
    void makeSound()
    {
        cout << "Piano playing...\n";
    }
};

class Guitar : public Instrument
{
public:
    void makeSound()
    {
        cout << "Guitar playing...\n";
    }
};

int main()
{

    Instrument *i1 = new Piano();
    // i1->makeSound();
    Instrument *i2 = new Guitar();
    // i2->makeSound();

    // Example for polymorphism

    Instrument *instruments[2] = {i1, i2};

    for (int i = 0; i < 2; i++)
    {
        instruments[i]->makeSound();
    }

    return 0;
}