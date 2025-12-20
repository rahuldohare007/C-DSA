#include <bits/stdc++.h>
using namespace std;

// Competitive Programming
int countDigits(int n){
    if (n == 0) return 1;
    return (int)log10(abs(n)) + 1; 
}
// Explanation: log10(n) gives the power to which 10 must be raised to get n.
// For example, if n = 1000, log10(1000) = 3, and we need to add 1 to count the digits (1000 has 4 digits).

// Time Complexity: O(1)
// Space Complexity: O(1)

// Interview
int countDigits(int n){
    if (n == 0) return 1;
    int cnt = 0;
    n = abs(n);
    while(n > 0){
        cnt++;
        n /= 10;
    }
    return cnt;
}
// Time Complexity: O(d) where d is the number of digits in n
// Space Complexity: O(1)

int main() {
    int n;
    cin >> n;
    cout << countDigits(n) << endl;
    return 0;
}
// Example:
// Input: n = 12345   Output: 5
// Input: n = -9876   Output: 4
// Input: n = 0       Output: 1