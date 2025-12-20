#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int x)
{
    if (x < 0)
        return false;

    int n = x;
    long long rev = 0;

    while (n > 0)
    {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }

    return rev == x;
}
// Time Complexity: O(log10(n))
// Space Complexity: O(1)

int main()
{
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    if (isPalindrome(number))
        cout << number << " is a palindrome." << endl;
    else
        cout << number << " is not a palindrome." << endl;

    return 0;
}

// Example:
// Input: 121
// Output: 121 is a palindrome.
// Input: -121
// Output: -121 is not a palindrome.