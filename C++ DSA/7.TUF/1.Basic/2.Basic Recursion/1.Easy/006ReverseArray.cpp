#include <bits/stdc++.h>
using namespace std;

// Iterative Approach
void reverseArrayIterative(vector<int> &vec, int n)
{
    int start = 0, end = n - 1;
    while (start < end)
    {
        swap(vec[start], vec[end]);
        start++;
        end--;
    }
}
// Time Complexity: O(n)
// Space Complexity: O(1)

// Using STL
void reverseArraySTL(vector<int> &arr, int n)
{
    reverse(arr.begin(), arr.end());
}
// Time Complexity: O(n)
// Space Complexity: O(1)

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5};
    int n = vec.size();

    // Using Iterative Approach
    reverseArrayIterative(vec, n);
    cout << "Reversed Array (Iterative): ";
    for (int element : vec)
    {
        cout << element << " ";
    }
    cout << endl;

    // Resetting array for STL method
    vector<int> vec2 = {1, 2, 3, 4, 5};

    // Using STL
    reverseArraySTL(vec2, n);
    cout << "Reversed Array (STL): ";
    for (int element : vec2)
    {
        cout << element << " ";
    }
    cout << endl;

    return 0;
}