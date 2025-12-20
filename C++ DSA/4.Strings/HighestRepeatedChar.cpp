#include <bits/stdc++.h>
using namespace std;

void HighestRepeatedChar(const string& str) {
    int freq[256] = {0};
    char maxChar = '\0';
    int maxCount = 0;

    for (char c : str) {
        if (c != ' ') {
            freq[(unsigned char)c]++;
            if (freq[(unsigned char)c] > maxCount) {
                maxCount = freq[(unsigned char)c];
                maxChar = c;
            }
        }
    }

    cout << "Max repeated character is '"
         << maxChar << "' with a count of "
         << maxCount << endl;
}
// Time Complexity: O(n), where n is the length of the string
// Space Complexity: O(1), as the size of the frequency array is constant (256

// Using map
void HighestRepeatedChar(const string& str) {
    unordered_map<char, int> freq;
    char maxChar = '\0';
    int maxCount = 0;

    for (char c : str) {
        if (c != ' ') {
            freq[c]++;
            if (freq[c] > maxCount) {
                maxCount = freq[c];
                maxChar = c;
            }
        }
    }

    cout << "Max repeated character is '"
         << maxChar << "' with a count of "
         << maxCount << endl;
}
// Time Complexity: O(n), where n is the length of the string
// Space Complexity: O(k), where k is the number of unique characters in the string

int main() {
    string str = "sample string with several characters";
    HighestRepeatedChar(str);
    return 0;
}