// LeetCode : 268. Missing Number

#include <bits/stdc++.h>
using namespace std;

void missingNumber(int arr[])
{
    int res = nums.size();

    for (int i = 0; i < nums.size(); i++)
    {
        res += i - nums[i];
    }

    return res;
}
// Explanation:
// The missing number is the difference between the sum of the indices and the sum of the values in the array.
// The sum of the indices is (n * (n - 1)) / 2, where n is the size of the array.
// The sum of the values in the array is the sum of the elements in the array.

// Time Complexity: O(n)
// Space Complexity: O(1)

int main()
{
    int arr[] = {0, 1, 2, 4, 5};
    missingNumber(arr);

    return 0;
}