#include<bits/stdc++.h>
using namespace std;

// Using simple string functions
bool isPangram(string str){
    string alphabets = "abcdefghijklmnopqrstuvwxyz";

    // convert string to lowercase
    for(char &c : str){
        c = tolower(c);
    }

    // check each alphabet
    for(char c : alphabets){
        if(str.find(c) == string::npos)
            return false;
    }
    return true;
}
// Time Complexity: O(n)
// Space Complexity: O(1)

// Using Hashing
bool isPangram(string str){
    bool seen[26] = {false};

    for(char c : str){
        if(isalpha(c)){
            seen[tolower(c) - 'a'] = true;
        }
    }

    for(bool b : seen){
        if(!b) return false;
    }
    return true;
}
// Time Complexity: O(n)
// Space Complexity: O(1)

int main(){
    string str = "The quick brown fox jumps over the lazy dog";

    if(isPangram(str))
        cout << "It's a Pangram";
    else
        cout << "It's not a Pangram";

    return 0;
}
