#include <bits/stdc++.h>
using namespace std;

class Deque
{
public:
    int arr[10]; // Array to store elements
    int front;   // Points to the front of the deque
    int rear;    // Points to the rear of the deque
    int size;    // Size of the deque

    Deque()
    {
        front = -1;
        rear = -1;
        size = 10; // Fixed size for simplicity
    }

    // Check if deque is full
    bool isFull()
    {
        return ((front == 0 && rear == size - 1) || (front == rear + 1));
    }

    // Check if deque is empty
    bool isEmpty()
    {
        return (front == -1);
    }

    // Insert an element at the front
    void insertFront(int val)
    {
        if (isFull())
        {
            cout << "Deque is Full" << endl;
            return;
        }

        // If the deque is initially empty
        if (front == -1)
        {
            front = 0;
            rear = 0;
        }
        else if (front == 0)
        {
            front = size - 1; // Circular array, move front to the last index
        }
        else
        {
            front--;
        }

        arr[front] = val;
    }

    // Insert an element at the rear
    void insertRear(int val)
    {
        if (isFull())
        {
            cout << "Deque is Full" << endl;
            return;
        }

        // If the deque is initially empty
        if (front == -1)
        {
            front = 0;
            rear = 0;
        }
        else if (rear == size - 1)
        {
            rear = 0; // Circular array, move rear to the first index
        }
        else
        {
            rear++;
        }

        arr[rear] = val;
    }

    // Delete an element from the front
    void deleteFront()
    {
        if (isEmpty())
        {
            cout << "Deque is Empty" << endl;
            return;
        }

        // Deque becomes empty after deletion
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else if (front == size - 1)
        {
            front = 0; // Circular array, move front to the first index
        }
        else
        {
            front++;
        }
    }

    // Delete an element from the rear
    void deleteRear()
    {
        if (isEmpty())
        {
            cout << "Deque is Empty" << endl;
            return;
        }

        // Deque becomes empty after deletion
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else if (rear == 0)
        {
            rear = size - 1; // Circular array, move rear to the last index
        }
        else
        {
            rear--;
        }
    }

    // Get the front element
    int getFront()
    {
        if (isEmpty())
        {
            cout << "Deque is Empty" << endl;
            return -1;
        }
        return arr[front];
    }

    // Get the rear element
    int getRear()
    {
        if (isEmpty())
        {
            cout << "Deque is Empty" << endl;
            return -1;
        }
        return arr[rear];
    }

    // Display the elements in the deque
    void display()
    {
        if (isEmpty())
        {
            cout << "Deque is Empty" << endl;
            return;
        }

        cout << "Deque elements: ";
        int i = front;
        while (i != rear)
        {
            cout << arr[i] << " ";
            i = (i + 1) % size; // Move index in a circular manner
        }
        cout << arr[rear] << endl; // Print the last element
    }
};

int main()
{
    Deque dq;
    dq.insertRear(10);
    dq.insertRear(20);
    dq.insertFront(30);
    dq.insertFront(40);
    dq.display();

    dq.deleteFront();
    dq.display();

    dq.deleteRear();
    dq.display();

    cout << "Front element: " << dq.getFront() << endl;
    cout << "Rear element: " << dq.getRear() << endl;

    return 0;
}
