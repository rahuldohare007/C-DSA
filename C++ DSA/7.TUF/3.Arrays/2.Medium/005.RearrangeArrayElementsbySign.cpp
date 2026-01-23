// LeetCode 2149. Rearrange Array Elements by Sign

#include <bits/stdc++.h>
using namespace std;

vector<int> rearrangeArray(vector<int> &nums)
{
    vector<int> result(nums.size());
    int posIndex = 0, negIndex = 1;

    for (int num : nums)
    {
        if (num > 0)
        {
            result[posIndex] = num;
            posIndex += 2;
        }
        else
        {
            result[negIndex] = num;
            negIndex += 2;
        }
    }
    return result;
}
// Time Complexity: O(n)
// Space Complexity: O(n)

int main()
{
    vector<int> nums = {3, 1, -2, -5, 2, -4};
    vector<int> result = rearrangeArray(nums);
    for (int num : result)
    {
        cout << num << " ";
    }

    return 0;
}