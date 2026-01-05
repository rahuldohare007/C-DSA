// LeetCode: 189 Rotate Array
#include <bits/stdc++.h>
using namespace std;

void reverse(vector<int>& nums, int start, int end){
    while(start < end){
        swap( nums[start], nums[end] );
        start++;
        end--;
    }
}

void rotate(vector<int>& nums, int k ){
    // Explanation for k %= nums.size():
    // If k is greater than the size of the array, rotating
    // it k times is equivalent to rotating it k % n times,
    // where n is the size of the array.
    k %= nums.size();

    // Explanation:
    // 1. Reverse the whole array
    // 2. Reverse the first k elements  
    // 3. Reverse the remaining n-k elements
    reverse(nums, 0, nums.size() - 1 );
    reverse(nums, 0, k - 1 );
    reverse(nums, k, nums.size() - 1 );
}

//Time Complexity: O(N)
//Space Complexity: O(1)

int main() {
    vector<int> nums = {};
    int k = 
 
    return 0;
}