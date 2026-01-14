#include <bits/stdc++.h>
using namespace std;

// using hashmap to store prefix sums and their earliest indices
int longestSubarrayWithSumK(const vector<int>& arr, int k) {
    int left = 0;
    long long sum = 0;
    int maxLen = 0;

    for(int right = 0; right < arr.size(); right++){
        sum += arr[right];

        while(sum > k && left <= right){
            sum -= arr[left];
            left++;
        }

        if(sum == k){
            maxLen = max(maxLen, right - left + 1);
        }
    }

    return maxLen;
}
// Time Complexity: O(n)
// Space Complexity: O(1)

int main() {
    vector<int> arr = {10, 5, 2, 7, 1, 9};
    int k = 15;
    cout << "Length of Longest Subarray with Sum " << k << ": " 
         << longestSubarrayWithSumK(arr, k) << endl;
 
    return 0;
}