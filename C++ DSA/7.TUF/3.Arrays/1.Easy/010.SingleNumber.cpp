// LeetCode 136 Single Number

#include <bits/stdc++.h>
using namespace std;

int singleNumber(vector<int> &nums)
{
    int result = 0;
    for (int num : nums)
    {
        result ^= num;
    }
    return result;
}
// Time Complexity: O(n)
// Space Complexity: O(1)

int main()
{
    vector<int> nums = {4, 1, 2, 1, 2};
    cout << "Single Number: " << singleNumber(nums) << endl;
    
    return 0;
}