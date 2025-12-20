#include <bits/stdc++.h>
using namespace std;

// Using sorting
bool isAnagram(string str1, string str2){
    if(str1.length() != str2.length())
        return false;

    // convert to lowercase
    for(char &c : str1) c = tolower(c);
    for(char &c : str2) c = tolower(c);

    // sort both strings
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    return str1 == str2;
}
// Time Complexity: O(n log n) due to sorting
// Space Complexity: O(1) if we ignore the input strings

// Using frequency array
bool isAnagram(string s1, string s2){
    if(s1.length() != s2.length())
        return false;

    int freq[26] = {0};

    for(char c : s1) freq[tolower(c) - 'a']++;
    for(char c : s2) freq[tolower(c) - 'a']--;

    for(int i = 0; i < 26; i++){
        if(freq[i] != 0)
            return false;
    }
    return true;
}
// Time Complexity: O(n)
// Space Complexity: O(1)

int main(){
    string str1 = "silent";
    string str2 = "listen";

    if(isAnagram(str1, str2))
        cout << "Anagram";
    else
        cout << "Not Anagram";

    return 0;
}
