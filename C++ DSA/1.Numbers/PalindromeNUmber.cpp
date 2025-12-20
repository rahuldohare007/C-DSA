#include <bits/stdc++.h>
using namespace std;

// Iterative approach
bool isPalindromeNumber(int number){
    if(number <= 0) return false;
    int temp = number;
    int reversed= 0;
    
    while(temp > 0){
        reversed = reversed * 10 + (temp % 10);
        temp = trunc(temp / 10);
    }
    return number == reversed;
}
// Time Complexity: O(d) where d is the number of digits in the number
// Space Complexity: O(1)

// Recursive approach
bool isPalindromeNumberRecursiveHelper(int number, int reversed){
    if(number == 0) return true;
    
    reversed = reversed * 10 + (number % 10);
    return isPalindromeNumberRecursiveHelper(trunc(number / 10), reversed) && (trunc(number / 10) == 0 ? (number == reversed) : true);
}
bool isPalindromeNumberRecursive(int number){
    if(number <= 0) return false;
    return isPalindromeNumberRecursiveHelper(number, 0);
}
// Time Complexity: O(d) where d is the number of digits in the number
// Space Complexity: O(d) due to recursive call stack

// Better approach: Check only half of the number
bool isPalindromeNumberBetter(int number){
    if(number < 0 || (number % 10 == 0 && number != 0)) return false;
    
    int reversed = 0;
    while(number > reversed){
        reversed = reversed * 10 + (number % 10);
        number = trunc(number / 10);
    }
    return number == reversed || number == trunc(reversed / 10);
}
// Time Complexity: O(d/2) where d is the number of digits in the number
// Space Complexity: O(1)   


int main(){
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    
    isPalindromeNumber(number) ? cout<<"(Iterative) "<<number<<" is a Palindrome Number": cout<<"(Iterative) "<<number<<" is not a Palindrome Number";
    cout<<endl;
    
    isPalindromeNumberRecursive(number) ? cout<<"(Recursive) "<<number<<" is a Palindrome Number": cout<<"(Recursive) "<<number<<" is not a Palindrome Number";
    cout<<endl;
    
    isPalindromeNumberBetter(number) ? cout<<"(Better) "<<number<<" is a Palindrome Number": cout<<"(Better) "<<number<<" is not a Palindrome Number";
    cout<<endl;
    
    return 0;
}