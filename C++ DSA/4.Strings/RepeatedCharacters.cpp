#include <bits/stdc++.h>
using namespace std;

string findRepeatedCharacters(const string& str) {
    int freq[256] = {0};
    string result = "";
    
    for(char c : str){
        if(c != ' '){
            freq[(unsigned char)c]++;
        }
    }
    for (char c : str) {
        if (c != ' ' && freq[(unsigned char)c] > 1 && result.find(c) == string::npos) {
            result += c;
        }
    }
    
    return result;
}
// Time Complexity: O(n)
// Space Complexity: O(1) - since the frequency array size is constant (256)


int main() {
    string str = "JavaScript";
    
    cout << findRepeatedCharacters(str);
    return 0;
}
