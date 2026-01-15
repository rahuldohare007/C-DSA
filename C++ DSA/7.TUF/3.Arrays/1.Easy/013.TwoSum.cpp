// LeetCode 1. Two Sum

#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    unordered_map<int, int> seen; // value -> index

    for (int i = 0; i < (int)nums.size(); i++)
    {
        int need = target - nums[i];
        auto it = seen.find(need);
        if (it != seen.end())
        {
            return {it->second, i};
        }
        seen[nums[i]] = i;
    }
    return {}; // if no solution
}
// Time Complexity: O(N)
// Space Complexity: O(N)

int main()
{
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = twoSum(nums, target);
    cout << "Indices of the two numbers that add up to " << target << ": ["
         << result[0] << ", " << result[1] << "]" << endl;

    return 0;
}