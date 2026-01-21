// LeetCode: 53. Maximum Subarray - Kadane's Algorithm

#include <bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int> &nums)
{
    int res = nums[0];
    int total = 0;

    for (int n : nums)
    {
        if (total < 0)
        {
            total = 0;
        }

        total += n;
        res = max(res, total);
    }

    return res;
}
// Time Complexity: O(N)
// Space Complexity: O(1)

int main()
{
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << "Maximum Subarray Sum: " << maxSubArray(nums) << endl;
    
    return 0;
}