// LeetCode 125: Valid Palindrome
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPalindrome(string s)
    {
        string cleaned = "";
        for (char c : s)
        {
            if (isalnum(c))
            {
                cleaned += tolower(c);
            }
        }
        int left = 0;
        int right = cleaned.length() - 1;
        while (left < right)
        {
            if (cleaned[left] != cleaned[right])
            {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};

// Time Complexity: O(n)
// Space Complexity: O(n)

class Solution
{
public:
    bool isPalindrome(string s)
    {
        int start = 0;
        int end = s.size() - 1;
        while (start <= end)
        {
            if (!isalnum(s[start]))
            {
                start++;
                continue;
            }
            if (!isalnum(s[end]))
            {
                end--;
                continue;
            }
            if (tolower(s[start]) != tolower(s[end]))
                return false;
            else
            {
                start++;
                end--;
            }
        }
        return true;
    }
};
// Time Complexity: O(n)
// Space Complexity: O(1)