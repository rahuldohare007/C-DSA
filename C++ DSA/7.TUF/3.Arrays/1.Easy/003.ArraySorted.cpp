// LeetCode 1752: Check if Array Is Sorted and Rotated
#include <bits/stdc++.h>
using namespace std;

bool arraySorted(vector<int> &nums)
{
    int count = 0;
    int size = nums.size();

    for (int i = 0; i < size; i++)
    {
        if (nums[i] > nums[(i + 1) % size])
        {
            count++;
        }
        if (count > 1)
        {
            return false;
        }
    }
    return true;
}
// Time Complexity: O(n)
// Space Complexity: O(1)

int main()
{
    vector<int> arr = {1, 2, 5, 3, 7};

    if (arraySorted(arr))
    {
        cout << "Sorted";
    }
    else
    {
        cout << "Not Sorted";
    }

    return 0;
}