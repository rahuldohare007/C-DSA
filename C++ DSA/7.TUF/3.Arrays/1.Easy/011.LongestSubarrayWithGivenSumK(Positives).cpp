#include <bits/stdc++.h>
using namespace std;

int longestSubarrayWithSumK(const vector<int>& arr, int k) {
    int left = 0, currentSum = 0, maxLength = 0;

    for (int right = 0; right < arr.size(); right++) {
        currentSum += arr[right];

        while (currentSum > k && left <= right) {
            currentSum -= arr[left];
            left++;
        }

        if (currentSum == k) {
            maxLength = max(maxLength, right - left + 1);
        }
    }

    return maxLength;
}
// Time Complexity: O(n)
// Space Complexity: O(1)

int main() {
    vector<int> arr = {1, 2, 3, 1, 2, 3};
    int k = 6;
    cout << "Length of Longest Subarray with Sum " << k << ": " 
         << longestSubarrayWithSumK(arr, k) << endl;
 
    return 0;
}