#include<bits/stdc++.h>
using namespace std;

string FindTheCommonCharacters(const string& str1, const string& str2){
    string result = "";

    for(char c : str2){
        if(str1.find(c) != string::npos &&
           result.find(c) == string::npos){
            result += c;
        }
    }
    return result;
}
// Time Complexity: O(n*m) where n and m are lengths of str1 and str2
// Space Complexity: O(k) where k is the number of common characters

// Using Hashing
string FindTheCommonCharacters(const string& str1, const string& str2){
    bool present[256] = {false};
    bool added[256] = {false};
    string result = "";

    // mark characters of str1
    for(char c : str1){
        present[(unsigned char)c] = true;
    }

    // check against str2
    for(char c : str2){
        if(present[(unsigned char)c] && !added[(unsigned char)c]){
            result += c;
            added[(unsigned char)c] = true;
        }
    }
    return result;
}
// Time Complexity: O(n + m) where n and m are lengths of str1 and str2
// Space Complexity: O(1)

int main(){
    string str1 = "abampx";
    string str2 = "acdep";
    
    string result = FindTheCommonCharacters(str1, str2);
    
    cout<<"Result : "<<result<<endl;
    
    return 0;
}