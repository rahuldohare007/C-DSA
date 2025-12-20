#include<bits/stdc++.h>
using namespace std;

// Using inbuilt reverse function
string reverseString(string s){
    reverse(s.begin(), s.end());
    return s;
}
// Time Complexity: O(n)
// Space Complexity: O(1)

// Using two pointers approach
string reverseString(string s){
    int left = 0, right = s.size() - 1;
    while(left < right){
        swap(s[left], s[right]);
        left++;
        right--;
    }
    return s;
}
// Time Complexity: O(n)
// Space Complexity: O(1)

int main(){
    string s = "Rahul Dohare";
    string result = reverseString(s);
    
    cout<<"Result: "<<result;
    
    return 0;
}