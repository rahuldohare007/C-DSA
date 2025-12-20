#include <bits/stdc++.h>
using namespace std;

void InsertionSort(vector<int> &array)
{
    int n = array.size();
    for (int i = 1; i < n; i++)
    {
        int key = array[i];
        int j = i - 1;
        while (j >= 0 && array[j] > key)
        {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = key;
    }
}
// Time Complexity:
// Best Case: O(n),
// Average Case: O(n^2),
// Worst Case: O(n^2)

// Space Complexity: O(1)

int main()
{
    vector<int> arr = {1, 2, 44, 3, 8, 9, 4};
    InsertionSort(arr);
    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
