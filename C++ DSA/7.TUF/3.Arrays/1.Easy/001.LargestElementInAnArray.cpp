#include <bits/stdc++.h>
using namespace std;

void largestElement(int arr[], int size)
{
    int max = arr[0];
    for (int index = 0; index < size; index++)
    {
        if (arr[index] > max)
        {
            max = arr[index];
        }
    }
    cout << "Max element: " << max;
}
// Time Complexity: O(n)
// Space Complexity: O(1)

// Using STL
void largestElementSTL(int arr[], int size)
{
    int max = *max_element(arr, arr + size);
    cout << "Max element using STL: " << max;
}
// Time Complexity: O(n)
// Space Complexity: O(1)

// Using vectors
void largestElementSTLVector(vector<int> &arr)
{
    int max = *max_element(arr.begin(), arr.end());
    cout << "Max element using STL vector: " << max;
}
// Time Complexity: O(n)
// Space Complexity: O(1)

int main()
{
    int arr[] = {1, 55, 56, 69, 2, 100};
    vector<int> vec = {1, 55, 56, 69, 2, 100};

    int size = sizeof(arr) / sizeof(arr[0]);

    largestElement(arr, size);
    largestElementSTL(arr, size);
    largestElementSTLVector(arr);

    return 0;
}