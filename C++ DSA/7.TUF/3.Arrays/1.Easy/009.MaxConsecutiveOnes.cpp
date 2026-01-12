// LeetCode: 485 Max Consecutive Ones (Easy)

#include <bits/stdc++.h>
using namespace std;

int findMaxConsecutiveOnes(vector<int> &nums)
{
    int res = 0;
    int left = 0;

    for (int right = 0; right < nums.size(); right++)
    {
        if (nums[right] == 0)
        {
            left = right + 1;
        }
        else
        {
            res = max(res, right - left + 1);
        }
    }

    return res;
}
// Time Complexity: O(n), where n is the number of elements in the array.
// Space Complexity: O(1), as we are using only a constant amount of extra space

int main()
{
    vector<int> nums = {1, 1, 0, 1, 1, 1};
    cout << "Max Consecutive Ones: " << findMaxConsecutiveOnes(nums) << endl;

    return 0;
}