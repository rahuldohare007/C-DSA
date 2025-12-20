#include<bits/stdc++.h>
using namespace std;

// Approach 1: In-Place Reversal
string reverseEachWordInPlace(string s) {
    int n = s.size();
    int start = 0;

    for (int i = 0; i <= n; i++) {
        if (i == n || s[i] == ' ') {
            // reverse the word s[start ... i-1]
            reverse(s.begin() + start, s.begin() + i);
            start = i + 1;
        }
    }

    return s;
}

// Time Complexity: O(N)
// Space Complexity: O(1)

int main() {
    string s = "Rahul Dohare Is A Great Warrior";
    cout << reverseEachWord(s);
    cout << reverseEachWordInPlace(s);
    return 0;
}
