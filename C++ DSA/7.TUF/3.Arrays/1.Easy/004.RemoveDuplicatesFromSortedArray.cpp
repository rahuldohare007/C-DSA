// LeetCode Problem 26: Remove Duplicates from Sorted Array
#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &nums)
{
    if (nums.empty())
        return 0;
    int i = 1;
    for (int j = 1; j < nums.size(); j++)
    {
        if (nums[j] != nums[i - 1])
        {
            nums[i] = nums[j];
            i++;
        }
    }

    return i;
}
// Time Complexity: O(n)
// Space Complexity: O(1)

int main()
{
    vector<int> arr = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};

    removeDuplicates(arr);

    return 0;
}