#include <bits/stdc++.h>
using namespace std;

string PlaceTheCharactersInString(const string& str1, const string& str2) {
    int str2Index = 0;
    string result = "";

    for (char c : str1) {
        if (isdigit(c)) {
            result += str2[str2Index];
            str2Index++;
        } else {
            result += c;
        }
    }
    return result;
}
// Time Complexity: O(n)
// Space Complexity: O(1)


int main() {
    string str1 = "J1V2SCR3P4";
    string str2 = "AAIT";

    cout << PlaceTheCharactersInString(str1, str2);
    return 0;
}
