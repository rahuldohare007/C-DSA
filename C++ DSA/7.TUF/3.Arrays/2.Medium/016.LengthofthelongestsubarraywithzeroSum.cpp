#include <bits/stdc++.h>
using namespace std;

int maxLen(vector<int> &A)
{
    int n = A.size();
    unordered_map<int, int> mpp;
    int maxi = 0;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += A[i];

        if (sum == 0)
        {
            maxi = i + 1;
        }
        else
        {
            if (mpp.find(sum) != mpp.end())
            {
                maxi = max(maxi, i - mpp[sum]);
            }
            else
            {
                mpp[sum] = i;
            }
        }
    }

    return maxi;
}
// Time Complexity: O(N) where N is the size of the input array.
// Space Complexity: O(N) where N is the size of the input array, in the worst case when all prefix sums are distinct.

int main()
{

    vector<int> arr = {15, -2, 2, -8, 1, 7, 10, 23};
    cout << maxLen(arr);

    return 0;
}