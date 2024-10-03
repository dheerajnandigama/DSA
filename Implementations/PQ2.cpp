#include <iostream>
using namespace std;

class PriorityQueue
{
private:
    int arr[10]; // Array to store the priority queue
    int size;    // Current size of the priority queue

public:
    // Constructor to initialize an empty priority queue
    PriorityQueue()
    {
        size = 0;
    }

    // Function to insert an element into the priority queue
    void enqueue(int val)
    {
        if (size == 10) // Queue is full
        {
            cout << "Priority Queue is Full" << endl;
            return;
        }

        // Insert the new element at the end of the array
        arr[size] = val;
        size++;

        // Sort the array to maintain the priority order
        for (int i = size - 1; i > 0; i--)
        {
            if (arr[i] < arr[i - 1])
            {
                swap(arr[i], arr[i - 1]);
            }
            else
            {
                break;
            }
        }
    }

    // Function to remove the highest priority element
    void dequeue()
    {
        if (size == 0) // Queue is empty
        {
            cout << "Priority Queue is Empty" << endl;
            return;
        }

        // Remove the element with the highest priority (the first element)
        for (int i = 0; i < size - 1; i++)
        {
            arr[i] = arr[i + 1]; // Shift elements to the left
        }
        size--;
    }

    // Function to get the element with the highest priority
    int front() const
    {
        if (size == 0) // Queue is empty
        {
            cout << "Priority Queue is Empty" << endl;
            return -1;
        }
        return arr[0]; // Return the first element (highest priority)
    }

    // Function to get the size of the priority queue
    int getSize() const
    {
        return size;
    }

    // Function to check if the priority queue is empty
    bool isEmpty() const
    {
        return size == 0;
    }

    // Function to display the elements of the priority queue
    void display() const
    {
        if (size == 0)
        {
            cout << "Priority Queue is Empty" << endl;
            return;
        }

        cout << "Priority Queue elements: ";
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    PriorityQueue pq;

    // Enqueue elements with different priorities
    pq.enqueue(30);
    pq.enqueue(10);
    pq.enqueue(20);
    pq.enqueue(50);
    pq.enqueue(40);

    pq.display(); // Displays the priority queue

    // Get the highest priority element
    cout << "Front element (highest priority): " << pq.front() << endl;

    // Dequeue the highest priority element
    pq.dequeue();
    pq.display();

    cout << "Front element after dequeue: " << pq.front() << endl;
    cout << "Size of Priority Queue: " << pq.getSize() << endl;

    return 0;
}
