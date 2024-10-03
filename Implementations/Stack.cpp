#include <bits/stdc++.h>
using namespace std;

class Stack
{
public:
    int arr[10];
    int index;

    Stack()
    {
        index = -1;
    }

    void push(int val)
    {
        if (index == 9)
        {
            cout << "Stack is Full" << endl;
            return;
        }
        index++;
        arr[index] = val;
    }

    void pop()
    {
        if (index == -1)
        {
            cout << "Stack is Empty" << endl;
            return;
        }
        index--;
    }

    int top()
    {
        if (index == -1)
        {
            cout << "Stack is Empty" << endl;
            return -1;
        }
        return arr[index];
    }

    int size()
    {
        return index + 1;
    }

    void display()
    {
        for (int i = 0; i <= index; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{

    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.display();
    return 0;
}
