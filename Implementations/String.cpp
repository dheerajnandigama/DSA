#include <iostream>
#include <cstring>
using namespace std;

class String
{
private:
    char *str;  // Pointer to store the string
    int length; // Length of the string

public:
    // Default constructor
    String()
    {
        str = new char[1]; // Allocate memory for an empty string
        str[0] = '\0';     // Null-terminate the string
        length = 0;
    }

    // Constructor with a C-string (char array)
    String(const char *input)
    {
        length = strlen(input);
        str = new char[length + 1]; // Allocate memory for the string and null-terminator
        strcpy(str, input);         // Copy the input string to str
    }

    // Copy constructor
    String(const String &other)
    {
        length = other.length;
        str = new char[length + 1]; // Allocate memory for the copy
        strcpy(str, other.str);     // Copy the string
    }

    // Destructor to free memory
    ~String()
    {
        delete[] str; // Free dynamically allocated memory
    }

    // Get the length of the string
    int size() const
    {
        return length;
    }

    // Append a string to the current string
    void append(const char *input)
    {
        int newLength = length + strlen(input);
        char *newStr = new char[newLength + 1]; // Allocate new memory for the combined string

        strcpy(newStr, str);   // Copy the current string
        strcat(newStr, input); // Concatenate the input string

        delete[] str; // Delete the old string
        str = newStr; // Assign the new combined string
        length = newLength;
    }

    // Get a character at a specific index
    char at(int index) const
    {
        if (index < 0 || index >= length)
        {
            cout << "Index out of bounds" << endl;
            return '\0';
        }
        return str[index];
    }

    // Overload the assignment operator
    String &operator=(const String &other)
    {
        if (this == &other)
            return *this; // Handle self-assignment

        delete[] str; // Free old memory
        length = other.length;
        str = new char[length + 1]; // Allocate new memory for the copy
        strcpy(str, other.str);     // Copy the string

        return *this;
    }

    // Overload the + operator to concatenate strings
    String operator+(const String &other) const
    {
        String newStr;
        newStr.append(str);
        newStr.append(other.str);
        return newStr;
    }

    // Overload the [] operator to access characters
    char &operator[](int index)
    {
        if (index < 0 || index >= length)
        {
            cout << "Index out of bounds" << endl;
            // Returning reference to the first element as a fallback, though this isn't ideal.
            return str[0];
        }
        return str[index];
    }

    // Display the string
    void display() const
    {
        cout << str << endl;
    }
};

int main()
{
    String s1("Hello");
    String s2(" World");

    // Display the strings
    s1.display();
    s2.display();

    // Append strings
    s1.append("!");
    s1.display();

    // Concatenate using the + operator
    String s3 = s1 + s2;
    s3.display();

    // Access character at a specific index
    cout << "Character at index 1: " << s1.at(1) << endl;

    // Using [] operator
    cout << "Character at index 2 using []: " << s1[2] << endl;

    // Assign one string to another
    String s4;
    s4 = s3;
    s4.display();

    return 0;
}
