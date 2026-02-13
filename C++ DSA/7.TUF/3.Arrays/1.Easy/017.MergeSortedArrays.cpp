// LeetCode: 88. Merge Sorted Array
#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int left = m - 1; // Pointer for nums1
    int right = n - 1; // Pointer for nums2
    int index = m + n - 1; // Pointer for merged array

    while (left >= 0 && right >= 0) {
        if (nums1[left] > nums2[right]) {
            nums1[index--] = nums1[left--];
        } else {
            nums1[index--] = nums2[right--];
        }
    }

    // If there are remaining elements in nums2, copy them
    while (right >= 0) {
        nums1[index--] = nums2[right--];
    }
}
// Time Complexity: O(m + n) where m and n are the sizes of nums1 and nums2 respectively
// Space Complexity: O(1) since we are merging in place

int main() {
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    vector<int> nums2 = {2, 5, 6};
    int m = 3; // Size of nums1
    int n = 3; // Size of nums2

    merge(nums1, m, nums2, n);

    // Print the merged array
    for (int num : nums1) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}