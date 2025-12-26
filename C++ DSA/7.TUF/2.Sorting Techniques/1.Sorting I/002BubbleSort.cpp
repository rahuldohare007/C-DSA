#include <bits/stdc++.h>
using namespace std;

// Iterative implementation of Bubble Sort
void bubbleSort(int arr[], int n)
{
    bool swapped;
    for (int i = 0; i < n - 1; i++)
    {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        // If no two elements were swapped in the inner loop, then break
        if (!swapped)
        {
            break;
        }
    }
}
// Time Complexity:
// Best Case: O(n)
// Average Case: O(n^2)
// Worst Case: O(n^2)

// Space Complexity: O(1)

// Recursive implementation of Bubble Sort
void bubbleSortRecursive(int arr[], int n)
{
    // Base Case: if the size is 1, it's already sorted
    if (n == 1)
        return;

    int didSwap = 0; // Flag to check if any swap occurred in this pass

    // One pass: push the largest element to the end
    for (int j = 0; j <= n - 2; j++)
    {
        if (arr[j] > arr[j + 1])
        {
            // Swap arr[j] and arr[j + 1]
            swap(arr[j], arr[j + 1]);
            didSwap = 1;
        }
    }

    // If no swap happened, array is already sorted
    if (didSwap == 0)
        return;

    // Recurse for the remaining unsorted portion
    bubble_sort(arr, n - 1);
}
// Time Complexity:
// Best Case: O(n)
// Average Case: O(n^2)
// Worst Case: O(n^2)

// Space Complexity: O(n) due to recursion stack

int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    selectionSort(arr, n);

    cout << "Sorted array: \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}