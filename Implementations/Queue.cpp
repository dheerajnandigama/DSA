#include <bits/stdc++.h>
using namespace std;

class Queue
{
public:
    int arr[10]; // Queue array of fixed size
    int front;   // Points to the front of the queue
    int rear;    // Points to the rear of the queue

    Queue()
    {
        front = -1;
        rear = -1;
    }

    void enqueue(int val)
    {
        if (rear == 9) // Queue is full
        {
            cout << "Queue is Full" << endl;
            return;
        }

        if (front == -1) // If the queue is initially empty
            front = 0;

        rear++;
        arr[rear] = val;
    }

    void dequeue()
    {
        if (front == -1 || front > rear) // Queue is empty
        {
            cout << "Queue is Empty" << endl;
            return;
        }
        front++;
    }

    int getFront()
    {
        if (front == -1 || front > rear) // Queue is empty
        {
            cout << "Queue is Empty" << endl;
            return -1;
        }
        return arr[front];
    }

    int size()
    {
        if (front == -1 || front > rear)
            return 0;
        return rear - front + 1;
    }

    void display()
    {
        if (front == -1 || front > rear) // Queue is empty
        {
            cout << "Queue is Empty" << endl;
            return;
        }

        for (int i = front; i <= rear; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.display();

    q.dequeue();
    q.display();

    cout << "Front element: " << q.getFront() << endl;
    cout << "Queue size: " << q.size() << endl;

    return 0;
}
