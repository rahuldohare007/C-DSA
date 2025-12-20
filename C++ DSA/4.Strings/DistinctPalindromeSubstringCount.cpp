#include <bits/stdc++.h>
using namespace std;

// Using Expand
void distinctPalindromesExpand(const string &s)
{
    int n = s.size();
    set<string> st;

    auto expand = [&](int l, int r)
    {
        while (l >= 0 && r < n && s[l] == s[r])
        {
            st.insert(s.substr(l, r - l + 1));
            l--;
            r++;
        }
    };

    for (int i = 0; i < n; i++)
    {
        expand(i, i);     // odd length
        expand(i, i + 1); // even length
    }

    // print result
    for (auto &x : st)
        cout << x << " ";
    cout << "\nCount: " << st.size() << endl;
}
// Time Complexity: O(n^2)
// Space Complexity: O(n^2) in worst case for storing palindromic substr

// Using Manacher's Algorithm

// -----Idea----------------------------
// Transform string with separators:
// "ababa" → #a#b#a#b#a#
// Manacher gives palindrome radius at each center
// Extract substrings from original string
// Use set to ensure distinct

void distinctPalindromesManacher(const string &s)
{
    int n = s.size();

    // Transform string
    string t = "#";
    for (char c : s)
    {
        t += c;
        t += "#";
    }

    int m = t.size();
    vector<int> p(m, 0);
    int c = 0, r = 0;

    for (int i = 0; i < m; i++)
    {
        int mirror = 2 * c - i;
        if (i < r)
            p[i] = min(r - i, p[mirror]);

        // expand
        while (i - p[i] - 1 >= 0 && i + p[i] + 1 < m &&
               t[i - p[i] - 1] == t[i + p[i] + 1])
        {
            p[i]++;
        }

        if (i + p[i] > r)
        {
            c = i;
            r = i + p[i];
        }
    }

    set<string> st;

    // extract palindromes
    for (int i = 0; i < m; i++)
    {
        for (int len = 1; len <= p[i]; len++)
        {
            int start = (i - len) / 2;
            st.insert(s.substr(start, len));
        }
    }

    // print result
    for (auto &x : st)
        cout << x << " ";
    cout << "\nCount: " << st.size() << endl;
}
// Time Complexity: O(n)
// Space Complexity: O(n)

int main()
{
    string s = "ababa";
    distinctPalindromesExpand(s);
    return 0;
}
