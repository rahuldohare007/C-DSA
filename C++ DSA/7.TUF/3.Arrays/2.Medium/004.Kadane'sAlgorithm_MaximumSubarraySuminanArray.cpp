#include <bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int> &nums)
{
    long long maxi = LLONG_MIN;
    long long sum = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
        if (sum > maxi)
        {
            maxi = sum;
        }
        if (sum < 0)
        {
            sum = 0;
        }
    }

    return maxi;
}
// Time Complexity: O(n)
// Space Complexity: O(1)

int main()
{
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << "Maximum Subarray Sum: " << maxSubArray(arr) << endl;

    return 0;
}