// Leetode- 31. Next Permutation

#include <bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int> &nums)
{
    int n = nums.size();
    int i = n - 2;

    // step 1: find the first decreasing element from the right
    while (i >= 0 && nums[i] >= nums[i + 1])
    {
        i--;
    }

    // step 2: if found, find the element just larger than nums[i] to swap
    if (i >= 0)
    {
        int j = n - 1;
        while (j >= 0 && nums[j] <= nums[i])
        {
            j--;
        }
        swap(nums[i], nums[j]);
    }

    // step 3: reverse the elements after index i
    reverse(nums.begin() + i + 1, nums.end());
}
// Time Complexity: O(n)
// Space Complexity: O(1)

int main()
{
    vector<int> nums = {1, 2, 3};
    nextPermutation(nums);
    for (int num : nums)
    {
        cout << num << " ";
    }
    
    return 0;
}