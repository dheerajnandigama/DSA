#include <iostream>
#include <stdexcept>

class PriorityQueue
{
private:
    int *heap;    // Array to store the heap
    int capacity; // Maximum capacity of the heap
    int size;     // Current size of the heap

    // Helper function to maintain the heap property (max-heap) during insertion
    void heapifyUp(int index)
    {
        if (index == 0)
            return; // If we reach the root, stop
        int parentIndex = (index - 1) / 2;

        if (heap[index] > heap[parentIndex])
        {
            std::swap(heap[index], heap[parentIndex]);
            heapifyUp(parentIndex); // Recursively heapify up
        }
    }

    // Helper function to maintain the heap property during removal of the maximum
    void heapifyDown(int index)
    {
        int leftChild = 2 * index + 1;
        int rightChild = 2 * index + 2;
        int largest = index;

        // Find the largest among the current node and its children
        if (leftChild < size && heap[leftChild] > heap[largest])
        {
            largest = leftChild;
        }

        if (rightChild < size && heap[rightChild] > heap[largest])
        {
            largest = rightChild;
        }

        // If the current node is not the largest, swap and continue heapifying down
        if (largest != index)
        {
            std::swap(heap[index], heap[largest]);
            heapifyDown(largest);
        }
    }

public:
    // Constructor to initialize the priority queue with a given capacity
    PriorityQueue(int cap) : capacity(cap), size(0)
    {
        heap = new int[capacity];
    }

    // Destructor to free the allocated memory
    ~PriorityQueue()
    {
        delete[] heap;
    }

    // Insert an element into the priority queue
    void push(int value)
    {
        if (size == capacity)
        {
            throw std::overflow_error("Priority queue is full");
        }

        heap[size] = value; // Insert the new element at the end of the array
        heapifyUp(size);    // Restore the max-heap property
        size++;             // Increase the size of the heap
    }

    // Get the maximum element (the root of the heap)
    int top() const
    {
        if (size == 0)
        {
            throw std::underflow_error("Priority queue is empty");
        }
        return heap[0];
    }

    // Remove the maximum element from the priority queue
    void pop()
    {
        if (size == 0)
        {
            throw std::underflow_error("Priority queue is empty");
        }

        heap[0] = heap[size - 1]; // Replace the root with the last element
        size--;                   // Reduce the size of the heap
        heapifyDown(0);           // Restore the max-heap property
    }

    // Check if the priority queue is empty
    bool isEmpty() const
    {
        return size == 0;
    }

    // Get the current size of the priority queue
    int getSize() const
    {
        return size;
    }
};

int main()
{
    PriorityQueue pq(10); // Create a priority queue with capacity 10

    pq.push(3);
    pq.push(5);
    pq.push(9);
    pq.push(6);
    pq.push(8);

    std::cout << "Top element: " << pq.top() << std::endl; // Should print 9

    pq.pop();
    std::cout << "After pop, top element: " << pq.top() << std::endl; // Should print 8

    return 0;
}
