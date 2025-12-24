// Fibonacci Number LeetCode 509
#include <bits/stdc++.h>
using namespace std;

// Optimal Approach - Recursion + Memoization
class Solution
{
public:
    int fib(int n, vector<int> &dp)
    {
        // Base Case
        if (n <= 1)
            return n;

        // Check if already computed
        if (dp[n] != -1)
            return dp[n];

        // Recursive Case with Memoization
        dp[n] = fib(n - 1, dp) + fib(n - 2, dp);
        return dp[n];
    }

    int fib(int n)
    {
        vector<int> dp(n + 1, -1);
        return fib(n, dp);
    }
};

// Time Complexity: O(n)
// Space Complexity: O(n) for recursion stack + O(n) for dp array = O

class Solution {
public:
    int fib(int n) {
        double sqrt5 = sqrt(5);
        double fibN = pow((1 + sqrt5) / 2, n) - pow((1 - sqrt5) / 2, n);
        return round(fibN / sqrt5);
    }
};
// Time Complexity: O(1)
// Space Complexity: O(1)


