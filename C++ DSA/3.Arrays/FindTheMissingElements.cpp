#include <bits/stdc++.h>
using namespace std;

int FindTheMissingUsingDifference(const vector<int>& array) {
    int target = array.back();   // last element

    unordered_set<int> st(array.begin(), array.end());  // faster lookup O(1)

    for (int i = 0; i < array.size() - 1; i++) {
        int difference = target - array[i];

        if (!st.count(difference)) {
            return difference;
        }
    }
    return -1;
}
// Time Complexity: O(N)
// Space Complexity: O(N)

int FindTheMissingUsingSum(const vector<int>& array) {
    int start = array[0];
    int end = array.back();

    int expectedSum = 0, actualSum = 0;

    for (int i = start; i <= end; i++) {
        expectedSum += i;
    }

    for (int x : array) {
        actualSum += x;
    }

    return expectedSum - actualSum;
}
// Time Complexity: O(N)
// Space Complexity: O(1)

int main() {
    vector<int> array = {3, 6, 9, 15, 18};
    vector<int> array1 = {1, 2, 4, 5, 6};

    cout << "Missing based on difference: "
         << FindTheMissingUsingDifference(array) << endl;

    cout << "Missing in arithmetic sequence element: "
         << FindTheMissingUsingSum(array1) << endl;

    return 0;
}
