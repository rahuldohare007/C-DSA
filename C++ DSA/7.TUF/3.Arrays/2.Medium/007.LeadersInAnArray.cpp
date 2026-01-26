#include <bits/stdc++.h>
using namespace std;

vector<int> leaders(vector<int>& nums) {
    int n = nums.size();
    vector<int> result;
    int max_from_right = nums[n - 1];
    result.push_back(max_from_right);

    for (int i = n - 2; i >= 0; i--) {
        if (nums[i] >= max_from_right) {
            max_from_right = nums[i];
            result.push_back(max_from_right);
        }
    }

    reverse(result.begin(), result.end());
    return result;
}
// Time Complexity: O(N)
// Space Complexity: O(1) (ignoring the space for the output array)

int main() {
    vector<int> nums = {16, 17, 4, 3, 5, 2};
    vector<int> result = leaders(nums);
    for (int leader : result) {
        cout << leader << " ";
    }
     
    return 0;
}