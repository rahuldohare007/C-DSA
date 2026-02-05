// LeetCode : 18. 4Sum

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> fourSum(vector<int> &nums, int target)
{
    vector<vector<int>> res;
    sort(nums.begin(), nums.end());
    int n = nums.size();

    for (int i = 0; i < n - 3; i++)
    {
        if (i > 0 && nums[i] == nums[i - 1])
            continue; // Skip duplicate elements for the first number

        for (int j = i + 1; j < n - 2; j++)
        {
            if (j > i + 1 && nums[j] == nums[j - 1])
                continue; // Skip duplicate elements for the second number

            int left = j + 1;
            int right = n - 1;

            while (left < right)
            {
                long long sum = static_cast<long long>(nums[i]) + nums[j] + nums[left] + nums[right];

                if (sum == target)
                {
                    res.push_back({nums[i], nums[j], nums[left], nums[right]});

                    // Skip duplicate elements for the third number
                    while (left < right && nums[left] == nums[left + 1])
                        left++;
                    // Skip duplicate elements for the fourth number
                    while (left < right && nums[right] == nums[right - 1])
                        right--;

                    left++;
                    right--;
                }
                else if (sum < target)
                {
                    left++;
                }
                else
                {
                    right--;
                }
            }
        }
    }

    return res;
}
// Time Complexity: O(n^3) - The outer two loops run O(n^2) times and the inner while loop runs O(n) in the worst case.
// Space Complexity: O(1) - We are using only a constant amount of extra space

int main()
{
    vector<int> nums = {1, 0, -1, 0, -2, 2};
    int target = 0;
    vector<vector<int>> result = fourSum(nums, target);
    for (const auto &quadruplet : result)
    {
        cout << "[";
        for (size_t i = 0; i < quadruplet.size(); i++)
        {
            cout << quadruplet[i];
            if (i < quadruplet.size() - 1)
                cout << ", ";
        }
        cout << "]\n";
    }
    
    return 0;
}