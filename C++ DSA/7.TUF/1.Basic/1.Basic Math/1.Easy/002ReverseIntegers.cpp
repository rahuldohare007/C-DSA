#include <bits/stdc++.h>
using namespace std;

int reverse(int x) {
    int rem;
    int sum = 0;
    while (x != 0) {
        rem = x % 10;

        if ((sum > INT_MAX / 10) || (sum < INT_MIN / 10)) {
            return 0;
        }

        sum = sum * 10 + rem;
        x /= 10;
    }
    return sum;
}
// Explanation: (sum > INT_MAX / 10) and (sum < INT_MIN / 10) checks for overflow/underflow before it happens.
// This is crucial because multiplying sum by 10 could exceed the integer limits.

// Time Complexity: O(d) where d is the number of digits in x
// Space Complexity: O(1)

int main() {
    int x;
    cin >> x;
    cout << reverse(x) << endl;
    return 0;
}

// Example:
// Input: x = 123   Output: 321
// Input: x = -123   Output: -321