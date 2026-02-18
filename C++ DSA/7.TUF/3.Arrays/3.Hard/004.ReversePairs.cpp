// LeetCode: 493. Reverse Pairs (Hard)
#include <bits/stdc++.h>
using namespace std;

int reversePairs(vector<int> &nums)
{
    int count = 0;
    int n = nums.size();
    vector<int> temp(n);

    function<void(int, int)> mergeSort = [&](int left, int right)
    {
        if (left >= right)
            return;

        int mid = left + (right - left) / 2;
        mergeSort(left, mid);
        mergeSort(mid + 1, right);

        // Count reverse pairs
        int j = mid + 1;
        for (int i = left; i <= mid; i++)
        {
            while (j <= right && (long long)nums[i] > 2LL * nums[j])
                j++;
            count += (j - (mid + 1));
        }

        // Merge step
        int i = left, k = left;
        j = mid + 1;

        while (i <= mid && j <= right)
        {
            if (nums[i] <= nums[j])
                temp[k++] = nums[i++];
            else
                temp[k++] = nums[j++];
        }

        while (i <= mid)
            temp[k++] = nums[i++];
        while (j <= right)
            temp[k++] = nums[j++];

        for (i = left; i <= right; i++)
            nums[i] = temp[i];
    };

    mergeSort(0, n - 1);
    return count;
}
// Time Complexity: O(n log n) - due to the merge sort approach used to count reverse pairs.
// Space Complexity: O(n) - due to the temporary arrays used during the merge process.

int main()
{
    vector<int> nums = {1, 3, 2, 3, 1};
    int result = reversePairs(nums);
    cout << "Number of reverse pairs: " << result << endl;
    
    return 0;
}