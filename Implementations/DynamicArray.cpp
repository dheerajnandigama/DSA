#include <iostream>

class DynamicArray
{
private:
    int *data;          // Pointer to the array's data
    size_t capacity;    // Total allocated memory size
    size_t currentSize; // Number of elements in the array

    // Private function to resize the array when it's full
    void resize()
    {
        capacity *= 2;                    // Double the capacity
        int *newData = new int[capacity]; // Allocate new memory

        // Copy old elements to the new memory
        for (size_t i = 0; i < currentSize; ++i)
        {
            newData[i] = data[i];
        }

        delete[] data;  // Delete old memory
        data = newData; // Point to the new memory
    }

public:
    // Constructor to initialize the dynamic array
    DynamicArray() : data(nullptr), capacity(1), currentSize(0)
    {
        data = new int[capacity]; // Initial allocation
    }

    // Destructor to free allocated memory
    ~DynamicArray()
    {
        delete[] data;
    }

    // Function to add an element to the array
    void push_back(int value)
    {
        if (currentSize == capacity)
        {
            resize(); // Resize if the array is full
        }
        data[currentSize++] = value; // Add the new element and increment size
    }

    // Function to get the size of the array
    size_t size() const
    {
        return currentSize;
    }

    // Function to access elements by index
    int &operator[](size_t index)
    {
        if (index >= currentSize)
        {
            throw std::out_of_range("Index out of range");
        }
        return data[index];
    }

    // Const version of operator[] for read-only access
    const int &operator[](size_t index) const
    {
        if (index >= currentSize)
        {
            throw std::out_of_range("Index out of range");
        }
        return data[index];
    }

    // Function to remove the last element (like pop_back in std::vector)
    void pop_back()
    {
        if (currentSize > 0)
        {
            --currentSize;
        }
    }

    // Function to get the capacity of the array
    size_t getCapacity() const
    {
        return capacity;
    }
};

int main()
{
    DynamicArray arr;

    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);

    std::cout << "Array elements: ";
    for (size_t i = 0; i < arr.size(); ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Array size: " << arr.size() << std::endl;
    std::cout << "Array capacity: " << arr.getCapacity() << std::endl;

    arr.pop_back(); // Remove the last element
    std::cout << "After pop_back, array size: " << arr.size() << std::endl;

    return 0;
}
