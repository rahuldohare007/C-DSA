#include <bits/stdc++.h>
using namespace std;

string CountTheCharacters(const string& str) {
    string result;
    int n = str.size();

    for (int i = 0; i < n; i++) {
        if (str[i] == ' ') continue;

        int count = 1;
        while (i + 1 < n && str[i] == str[i + 1]) {
            count++;
            i++;
        }

        result += str[i];           // add character
        result += to_string(count); // add count correctly
    }
    return result;
}
//Time Complexity: O(n)
//Space Complexity: O(1) excluding the output string

// LeetCode 443: https://leetcode.com/problems/string-compression/
int compress(vector<char>& chars) {
    int write = 0;

    for (int i = 0; i < chars.size(); i++) {
        int count = 1;
        while (i + 1 < chars.size() && chars[i] == chars[i + 1]) {
            count++;
            i++;
        }

        chars[write++] = chars[i];
        if (count > 1) {
            for (char c : to_string(count))
                chars[write++] = c;
        }
    }
    return write;
}


int main(){
    string str = "aabbccca affkk";
    string result = CountTheCharacters(str);

    cout << "Result: " << result;
    return 0;
}
