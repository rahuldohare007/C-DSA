#include <bits/stdc++.h>
using namespace std;

// Iterative approach
bool isArmstrong(int number){
    int sum = 0 ;
    int temp = number;
    int k = to_string(number).length();
    
    while(temp > 0){
        int digit = temp % 10;
        sum += pow(digit,k);
        temp = trunc(temp / 10);
    }
    
    return sum == number;       
}
// Time Complexity: O(d) where d is the number of digits in the number
// Space Complexity: O(1)

// Recursive approach
bool isArmstrongRec(int number, int &sum){
    if(number == 0) return sum;
    
    int digit = number % 10;
    sum += pow(digit,3);
    
    return isArmstrongRec(trunc(number / 10), sum);
}
// Time Complexity: O(d) where d is the number of digits in the number
// Space Complexity: O(d) due to recursive stack space

int main(){
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    
    isArmstrong(number) ? cout<<"It's an Armstrong number" : cout<<"It's not an Armstrong number";
    cout<<endl;
    
    return 0;
}