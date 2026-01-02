#include <bits/stdc++.h>
using namespace std;

void largestAndSecondLargest(int arr[], int size)
{
    if (size < 2)
    {
        cout << "Array must have at least 2 elements";
        return;
    }

    int max = INT_MIN;
    int secondMax = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            secondMax = max;
            max = arr[i];
        }
        else if (arr[i] > secondMax && arr[i] != max)
        {
            secondMax = arr[i];
        }
    }

    if (secondMax == INT_MIN)
    {
        cout << "No second largest element";
    }
    else
    {
        cout << "Max element: " << max << endl;
        cout << "Second Max element: " << secondMax << endl;
    }
}
// Time Complexity: O(n)
// Space Complexity: O(1)

int main()
{
    int arr[] = {1, 55, 56, 69, 2, 100};
    int size = sizeof(arr) / sizeof(arr[0]);

    largestAndSecondLargest(arr, size);
    return 0;
}
