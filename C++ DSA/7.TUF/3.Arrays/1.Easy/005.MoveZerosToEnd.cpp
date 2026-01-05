// Leetcode: 283 - Move Zeroes
#include <bits/stdc++.h>
using namespace std;

void moveZeroesOptimized(vector<int> &nums)
{
    int left = 0;
    for (int right = 0; right < nums.size(); right++)
    {
        if (nums[right] != 0)
        {
            swap(nums[right], nums[left]);
            left++;
        }
    }
}
// Time Complexity: O(n)
// Space Complexity: O(1)

int main()
{
    vector<int> nums = {0, 1, 0, 3, 12};
    moveZeroesOptimized(nums);
    return 0;
}