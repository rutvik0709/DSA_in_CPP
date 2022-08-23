#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int low, int high, int key)
{
    int mid = low + (high - low) / 2;
    while (low <= high)
    {
        if (arr[mid]==key)
        {
            return mid;
        }
        if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}
int main(void)
{
    int key = 4;
    int arr[] = {0, 1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = binarySearch(arr, 0, n - 1, key);
    (result == -1)
        ? cout << "Element is not present in array"
        : cout << "Element is present at index " << result;
    return 0;
}

