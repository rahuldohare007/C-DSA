// LeetCode: 15. 3Sum

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int> &nums)
{
    vector<vector<int>> res;
    sort(nums.begin(), nums.end());
    int n = nums.size();

    for (int i = 0; i < n - 2; i++)
    {
        if (i > 0 && nums[i] == nums[i - 1])
            continue; // Skip duplicate elements for the first number

        int left = i + 1;
        int right = n - 1;

        while (left < right)
        {
            int sum = nums[i] + nums[left] + nums[right];

            if (sum == 0)
            {
                res.push_back({nums[i], nums[left], nums[right]});

                // Skip duplicate elements for the second number
                while (left < right && nums[left] == nums[left + 1])
                    left++;
                // Skip duplicate elements for the third number
                while (left < right && nums[right] == nums[right - 1])
                    right--;

                left++;
                right--;
            }
            else if (sum < 0)
            {
                left++;
            }
            else
            {
                right--;
            }
        }
    }

    return res;
}
// Time Complexity: O(n^2) - The outer loop runs O(n) times and the inner while loop also runs O(n) in the worst case.
// Space Complexity: O(1) - We are using only a constant amount of extra space


int main()
{
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> result = threeSum(nums);
    for (const auto &triplet : result)
    {
        cout << "[";
        for (size_t i = 0; i < triplet.size(); i++)
        {
            cout << triplet[i];
            if (i < triplet.size() - 1)
                cout << ", ";
        }
        cout << "]\n";
    }
    
    return 0;
}