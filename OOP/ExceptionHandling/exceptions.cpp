#include <bits/stdc++.h>
using namespace std;

class Printer
{
    string _name;
    int _availablePaper;

public:
    Printer(string name, int paper)
    {
        _name = name;
        _availablePaper = paper;
    }

    void print(string txtDoc)
    {

        int reqPaper = txtDoc.length() / 10; // 40/10 = 4 papers

        if (reqPaper > _availablePaper)
        {
            // throw "No paper";
            // throw 101;
            throw true;
        }

        cout << "Printing..." << txtDoc << endl;
        _availablePaper = _availablePaper - reqPaper;
    }
};

int main()
{

    Printer myPrinter("HP", 10);

    try
    {
        myPrinter.print("Hello, my name is Dheeraj. I am a Software Engineer.");
        myPrinter.print("Hello, my name is Dheeraj. I am a Software Engineer.");
        myPrinter.print("Hello, my name is Dheeraj. I am a Software Engineer.");
        myPrinter.print("Hello, my name is Dheeraj. I am a Software Engineer.");
    }
    catch (const char *txtException)
    {
        cout << "Exception: " << txtException << endl;
    }
    catch (int exCode)
    {
        cout << "Exception: " << exCode << endl;
    }
    catch (...)
    {
        cout << "Exception happend!" << endl;
    }

    return 0;
}

// default handler should be at end
