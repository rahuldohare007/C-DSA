// LeetCode: 560. Subarray Sum Equals K

#include <bits/stdc++.h>
using namespace std;

int subarraySum(vector<int> &nums, int k)
{
    unordered_map<int, int> prefixSumCount;
    prefixSumCount[0] = 1; // Base case: one way to have sum 0

    int currentSum = 0;
    int count = 0;

    for (int num : nums)
    {
        currentSum += num;

        if (prefixSumCount.find(currentSum - k) != prefixSumCount.end())
        {
            count += prefixSumCount[currentSum - k];
        }

        prefixSumCount[currentSum]++;
    }

    return count;
}
// Time Complexity: O(n)
// Space Complexity: O(n)

int main()
{
    vector<int> nums = {1, 1, 1};
    int k = 2;
    int result = subarraySum(nums, k);
    cout << "Number of subarrays with sum " << k << ": " << result << endl;

    return 0;
}