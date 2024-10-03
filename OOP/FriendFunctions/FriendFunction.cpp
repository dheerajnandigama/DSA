#include <bits/stdc++.h>
using namespace std;

class Equilateral
{
private:
    float a;
    float circumference;
    float area;

public:
    void setA(float len)
    {
        a = len;
        circumference = a * 3;
        area = (1.73 * a * a) / 4;
    }

    // friend void printResults(Equilateral);
    friend class Homework;
};

// void printResults(Equilateral e)
// {
//     cout << "Circumference: " << e.circumference << endl;
//     cout << "Area: " << e.area << endl;
// }

class Homework
{
public:
    void printResults(Equilateral e)
    {
        cout << "Circumference: " << e.circumference << endl;
        cout << "Area: " << e.area << endl;
    }
};

int main()
{
    Equilateral eq;
    eq.setA(5);

    // printResults(eq);
    Homework h;
    h.printResults(eq);

    return 0;
}