#include <bits/stdc++.h>
using namespace std;

// Check if a string is palindrome
bool isPalindrome(const string &str)
{
    int left = 0, right = str.size() - 1;
    while (left < right)
    {
        if (str[left] != str[right])
            return false;
        left++;
        right--;
    }
    return true;
}

// Find the largest palindromic word
string FindTheLargestPalindromeInAString(const string &str)
{
    stringstream ss(str);
    string word;
    string maxLengthPalindrome = "";

    while (ss >> word)
    {
        if (isPalindrome(word) && word.length() > maxLengthPalindrome.length())
        {
            maxLengthPalindrome = word;
        }
    }

    return maxLengthPalindrome;
}
// Time Complexity: O(N * M) where N is the number of words and M is the average length of the words
// Space Complexity: O(1)

// ------------------- Manacher's Algorithm Approach -------------------
string preprocess(const string &s)
{
    string t = "^";
    for (char c : s)
    {
        t += "#";
        t += c;
    }
    t += "#$";
    return t;
}

vector<int> manacher(const string &s)
{
    string t = preprocess(s);
    int n = t.size();
    vector<int> P(n, 0);

    int center = 0, right = 0;

    for (int i = 1; i < n - 1; i++)
    {
        int mirror = 2 * center - i;

        if (i < right)
            P[i] = min(right - i, P[mirror]);

        while (t[i + 1 + P[i]] == t[i - 1 - P[i]])
            P[i]++;

        if (i + P[i] > right)
        {
            center = i;
            right = i + P[i];
        }
    }
    return P;
}
// Time Complexity: O(N) where N is the length of the string
// Space Complexity: O(N)

int main()
{
    string str = "aba aa cdadc vababav abcdef ade";

    string result = FindTheLargestPalindromeInAString(str);
    string result2 = manacher(str);

    cout << result << endl;
    cout << result2;
    return 0;
}
