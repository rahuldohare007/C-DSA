#include <bits/stdc++.h>
using namespace std;

// Iterative implementation of Insertion Sort
void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
// Time Complexity:
// Best Case: O(n)
// Average Case: O(n^2)
// Worst Case: O(n^2)

// Space Complexity: O(1)

// Recursive implementation of Insertion Sort
void insertionSortRecursive(int arr[], int n)
{
    // Base Case
    if (n <= 1)
        return;

    // Sort first n-1 elements
    insertionSortRecursive(arr, n - 1);

    // Insert last element at its correct position in sorted array
    int key = arr[n - 1];
    int j = n - 2;

    while (j >= 0 && arr[j] > key)
    {
        arr[j + 1] = arr[j];
        j--;
    }
    arr[j + 1] = key;
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

    insertionSort(arr, n);

    cout << "Sorted array: \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}