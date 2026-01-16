// LeetCode 75. Sort Colors
#include <bits/stdc++.h>
using namespace std;

void sortColors(vector<int> &nums)
{
    int low = 0, mid = 0;
    int high = nums.size() - 1;

    while (mid <= high)
    {
        if (nums[mid] == 0)
        {
            swap(nums[low], nums[mid]);
            low++;
            mid++;
        }
        else if (nums[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(nums[mid], nums[high]);
            high--;
        }
    }
}
// Time Complexity: O(n)
// Space Complexity: O(1)

// Using Unordered Map
void sortColors(vector<int> &nums)
{
    unordered_map<int, int> count = {{0, 0}, {1, 0}, {2, 0}};

    for (int num : nums)
    {
        count[num]++;
    }

    int idx = 0;
    for (int color = 0; color < 3; color++)
    {
        int freq = count[color];
        for (int j = 0; j < freq; j++)
        {
            nums[idx] = color;
            idx++;
        }
    }
}
// Time Complexity: O(n)
// Space Complexity: O(1)

int main()
{
    vector<int> nums = {2, 0, 2, 1, 1, 0};
    sortColors(nums);
    cout << "Sorted Colors: ";
    for (int num : nums)
    {
        cout << num << " ";
    }

    return 0;
}