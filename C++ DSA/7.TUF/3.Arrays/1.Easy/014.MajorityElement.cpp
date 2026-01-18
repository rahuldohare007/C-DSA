// LeetCode - 169. Majority Element
#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> &nums)
{
    int res = 0;
    int majority = 0;

    for (int n : nums)
    {
        if (majority == 0)
        {
            res = n;
        }

        majority += n == res ? 1 : -1;
    }

    return res;
}
// Time Complexity: O(N)
// Space Complexity: O(1)

// Using HashMap
int majorityElement(vector<int> &nums)
{
    unordered_map<int, int> hash;
    int res = 0;
    int majority = 0;

    for (int n : nums)
    {
        hash[n] = 1 + hash[n];
        if (hash[n] > majority)
        {
            res = n;
            majority = hash[n];
        }
    }

    return res;
}
// Time Complexity: O(N)
// Space Complexity: O(N)

int main()
{
    vector<int> nums = {3, 2, 3};
    cout << majorityElement(nums) << endl; // Output: 3
    
    return 0;
}