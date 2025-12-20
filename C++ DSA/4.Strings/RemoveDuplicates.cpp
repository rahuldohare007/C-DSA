#include <bits/stdc++.h>
using namespace std;

string RemoveDuplicates(const string& str) {
    int freq[256] = {0};
    string result = "";

    // count frequency
    for (char c : str) {
        if (c != ' ')
            freq[(unsigned char)c]++;
    }

    // add characters that appear exactly once (preserve order)
    for (char c : str) {
        if (c != ' ' && freq[(unsigned char)c] == 1) {
            result += c;
        }
    }

    return result;
}
// Time Complexity: O(n)
// Space Complexity: O(1) - since the frequency array size is constant (256)


int main() {
    string str1 = "Javascript";
    cout << RemoveDuplicates(str1);
    return 0;
}
