#include <bits/stdc++.h>
using namespace std;

// Approach: Using XOR
vector<int> findMissingRepeatingNumbers(vector<int>& nums) {
    int n = nums.size();
    int xor1 = 0;
    for (int i = 0; i < n; i++) {
        xor1 ^= nums[i];
        xor1 ^= (i + 1);
    }

    int setBit = xor1 & ~(xor1 - 1);
    int x = 0, y = 0;

    for (int i = 0; i < n; i++) {
        if (nums[i] & setBit) {
            x ^= nums[i];
        } else {
            y ^= nums[i];
        }

        if ((i + 1) & setBit) {
            x ^= (i + 1);
        } else {
            y ^= (i + 1);
        }
    }

    // Determine which is missing and which is repeating
    int countX = count(nums.begin(), nums.end(), x);
    if (countX == 2) {
        return {x, y}; // x is repeating, y is missing
    } else {
        return {y, x}; // y is repeating, x is missing
    }
}
// Time Complexity: O(n)
// Space Complexity: O(1)

// Approach: Using Hashing
vector<int> findMissingRepeatingNumbers(vector<int>& nums) {
       
        // Size of the array
        long long n = nums.size(); 

        // Sum of first n natural numbers
        long long SN = (n * (n + 1)) / 2;
        
        // Sum of squares of first n natural numbers
        long long S2N = (n * (n + 1) * (2 * n + 1)) / 6;

        /*Calculate actual sum (S) and sum 
        of squares (S2) of array elements*/
        long long S = 0, S2 = 0;
        for (int i = 0; i < n; i++) {
            S += nums[i];
            S2 += (long long)nums[i] * (long long)nums[i];
        }

        //Compute the difference values
        long long val1 = S - SN; 
        
        // S2 - S2n = X^2 - Y^2
        long long val2 = S2 - S2N; 

        //Calculate X + Y using X + Y = (X^2 - Y^2) / (X - Y)
        val2 = val2 / val1;

        /* Calculate X and Y from X + Y and X - Y
         X = ((X + Y) + (X - Y)) / 2
         Y = X - (X - Y)*/
        long long x = (val1 + val2) / 2;
        long long y = x - val1;

        // Return the results as {repeating, missing}
        return {(int)x, (int)y};
}
// Time Complexity: O(n)
// Space Complexity: O(1)

int main() {
        vector<int> nums = {3, 1, 2, 5, 3};
        vector<int> result = findMissingRepeatingNumbers(nums);
        cout << "Repeating number: " << result[0] << ", Missing number: " << result[1] << endl;  
          
        return 0;
}