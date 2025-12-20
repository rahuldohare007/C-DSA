#include <bits/stdc++.h>
using namespace std;

// Using unordered_map to store frequency of each character
void CalculateTheOccurrenceOfEveryCharacter(const string& str) {
    unordered_map<char, int> frequency;

    for (char c : str) {
        if (c != ' ') {          // ignore spaces
            frequency[c]++;
        }
    }

    for (auto &p : frequency) {
        cout << "Occurrence of char '" << p.first
             << "' is " << p.second << endl;
    }
}
// Time Complexity: O(n)
// Space Complexity: O(1) - as the character set is fixed (ASCII)

// Using fixed size array to store frequency of each character
void CalculateTheOccurrenceOfEveryCharacter(const string& str) {
    int freq[256] = {0};

    for (char c : str) {
        if (c != ' ')
            freq[(unsigned char)c]++;
    }

    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            cout << "Occurrence of char '"
                 << (char)i << "' is "
                 << freq[i] << endl;
        }
    }
}
// Time Complexity: O(n)
// Space Complexity: O(1) - fixed size array for ASCII characters

int main(){
    string str = "Hello World!";
    CalculateTheOccurrenceOfEveryCharacter(str);
    return 0;
}
