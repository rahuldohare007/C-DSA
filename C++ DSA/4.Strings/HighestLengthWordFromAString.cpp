#include <bits/stdc++.h>
using namespace std;

void HighestLengthWord(const string& str) {
    stringstream ss(str);
    string word, maxWord = "";

    while (ss >> word) {
        if (word.length() > maxWord.length()) {
            maxWord = word;
        }
    }

    cout << "The longest word is '" << maxWord
         << "' with a length of " << maxWord.length() << endl;
}
// Time Complexity: O(N), where N is the length of the string
// Space Complexity: O(1)

int main() {
    string str = "Hello my name is Salman Bhai";
    HighestLengthWord(str);
    return 0;
}
