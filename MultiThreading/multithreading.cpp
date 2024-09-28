#include <iostream>
#include <thread>
using namespace std;

void func1(char a)
{
    for (int i = 0; i < 100; i++)
    {
        cout << a;
    }
}

void func2()
{
    for (int i = 0; i < 100; i++)
    {
        cout << "- ";
    }
}

int main()
{

    thread worker1(func1, 'a');
    thread worker2(func2);

    system("pause>nul");

    return 0;
}