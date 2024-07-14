#include <bits/stdc++.h>
using namespace std;

void insertion(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int tmp = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > tmp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = tmp;
    }
}

int main()
{
    int arr[] = {10, 18, 15, 25, 12, 8, 20, -2, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    insertion(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}