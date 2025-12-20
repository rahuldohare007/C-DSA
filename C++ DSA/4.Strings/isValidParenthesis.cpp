#include <bits/stdc++.h>
using namespace std;

bool isValidParenthesis(const string& str) {
    unordered_map<char, char> mp = {
        {')', '('},
        {'}', '{'},
        {']', '['}
    };

    stack<char> st;

    for (char c : str) {
        // If closing bracket
        if (mp.count(c)) {
            if (st.empty() || st.top() != mp[c])
                return false;
            st.pop();
        }
        // Opening bracket
        else {
            st.push(c);
        }
    }

    return st.empty();
}
// Time Complexity: O(n)
// Space Complexity: O(n)

int main() {
    cout << isValidParenthesis("()[]{}");
    return 0;
}
