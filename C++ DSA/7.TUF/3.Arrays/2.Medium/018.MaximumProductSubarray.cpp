// LeetCode: 152. Maximum Product Subarray (Medium)
#include <bits/stdc++.h>
using namespace std;

int maxProduct(vector<int> &nums)
{
    int res = *max_element(nums.begin(), nums.end());
    int curMax = 1, curMin = 1;

    for (int n : nums)
    {
        int temp = curMax * n;
        curMax = max({temp, curMin * n, n});
        curMin = min({temp, curMin * n, n});

        res = max(res, curMax);
    }

    return res;
}

// Time Complexity: O(n) where n is the size of the input array.
// Space Complexity: O(1) as we are using only a constant amount of extra space

int main()
{
    vector<int> nums = {2, 3, -2, 4};
    cout << maxProduct(nums) << endl;

    return 0;
}