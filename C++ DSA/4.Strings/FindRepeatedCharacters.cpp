#include <bits/stdc++.h>
using namespace std;

string findRepeatedCharacters(string str){
    string result = "";
    int freq[256] = {0};
    
    for(char c : str){
        if(c != ' '){
            freq[(unsigned char)c]++;
        }
    }
    for(int i = 0; i < 256; i++ ){
        if(freq[i] > 1){
            result += (char)i;
        }
    }
    
    return result;
}
// Time Complexity: O(n)
// Space Complexity: O(1)

int main(){
   string str = "Welcome to javascript";
   string result = findRepeatedCharacters(str);
   
   cout<<"Result: "<<result;
    return 0;
}
