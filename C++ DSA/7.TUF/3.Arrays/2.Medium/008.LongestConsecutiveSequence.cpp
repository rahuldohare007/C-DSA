// LeetCode : 128.Longest Consecutive Sequence

#include <bits/stdc++.h>
using namespace std;

int longestConsecutive(vector<int>& nums) {
    unordered_set<int> numSet;
    for (int num : nums) {
        numSet.insert(num);
    }

    int longestStreak = 0;

    for (int num : numSet) {
        if (numSet.find(num - 1) == numSet.end()) {
            int currentNum = num;
            int currentStreak = 1;

            while (numSet.find(currentNum + 1) != numSet.end()) {
                currentNum += 1;
                currentStreak += 1;
            }

            longestStreak = max(longestStreak, currentStreak);
        }
    }

    return longestStreak;        
}
// Time Complexity: O(N)
// Space Complexity: O(N)


int main() {
    vector<int> nums = {100, 4, 200, 1, 3, 2};
    cout << "Longest Consecutive Sequence Length: " << longestConsecutive(nums) << endl;
    
    return 0;
}