#include <bits/stdc++.h>
using namespace std;

class Book
{
public:
    string Title;
    string Author;
    int *Rates;
    int RatesCounter;

    Book(string title, string author)
    {
        Title = title;
        Author = author;

        RatesCounter = 2;
        Rates = new int[RatesCounter];
        Rates[0] = 4;
        Rates[1] = 5;

        cout << Title + ": Constrcuctor Invoked" << endl;
    }
    ~Book()
    {
        delete[] Rates;
        Rates = nullptr;
        cout << Title + ": Destrcutor Invoked" << endl;
    }
};

int main()
{

    Book b1("Super", "Man");
    Book b2("Hero", "Villan");

    return 0;
}