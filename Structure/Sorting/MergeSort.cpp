#include <bits/stdc++.h>
using namespace std;

void merge(int ar[], int low, int mid, int high)
{
    int tmp[high - low + 1], p1 = low, p2 = mid + 1, idx = 0;
    while (p1 <= mid && p2 <= high)
    {
        if (ar[p1] <= ar[p2])
            tmp[idx++] = ar[p1++];
        else
            tmp[idx++] = ar[p2++];
    }
    while (p1 <= mid)
        tmp[idx++] = ar[p1++];
    while (p2 <= high)
        tmp[idx++] = ar[p2++];
    for (int i = 0; i < idx; i++)
        ar[low + i] = tmp[i];
}
void merge_sort(int ar[], int low, int high)
{
    if (low == high)
    {
        return;
    }
    int mid = low + (high - low) / 2;
    merge_sort(ar, low, mid);
    merge_sort(ar, mid + 1, high);
    merge(ar, low, mid, high);
}

int main()
{
    int arr[] = {3, 15, 8, 20, -4, 12, 8, -2, 10, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int low = 0;
    int high = n - 1;
    merge_sort(arr, low, high);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}