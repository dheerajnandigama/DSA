#include <bits/stdc++.h>
using namespace std;

int firstOcc(int arr[], int n, int idx, int key)
{
    if (idx == n)
    {
        return -1;
    }

    if (arr[idx] == key)
    {
        return idx;
    }
    return firstOcc(arr, n, idx + 1, key);
}

int lastOcc(int arr[], int n, int idx, int key)
{
    if (idx == n)
    {
        return -1;
    }

    int restArray = lastOcc(arr, n, idx + 1, key);
    if (restArray != -1)
    {
        return restArray;
    }

    if (arr[idx] == key)
    {
        return idx;
    }

    return -1;
}

int main()
{
    int arr[] = {4, 2, 1, 2, 5, 2, 7};
    cout << firstOcc(arr, 7, 0, 2) << endl;
    cout << lastOcc(arr, 7, 0, 2) << endl;
    return 0;
}