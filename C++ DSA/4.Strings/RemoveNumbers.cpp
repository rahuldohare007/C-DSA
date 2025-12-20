#include <bits/stdc++.h>
using namespace std;

string RemoveNumbers(const string& str1) {
    string result = "";
    
    for(char c : str1){
        if(!isdigit(c) && c != ' ')
            result += c;
    }
    
    return result;
}
// Time Complexity: O(n)
// Space Complexity: O(1)

int main() {
    string str1 = "ab3c5d8 78af";
    
    cout << RemoveNumbers(str1);
    return 0;
}
