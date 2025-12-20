#include <bits/stdc++.h>
using namespace std;

// Iterative approach
bool isStrongNumber(int number){
    int temp = number;
    int factorial[] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880};
    int sum = 0;
    
    while(temp > 0){
        int digit = temp % 10;
        sum += factorial[digit];
        temp = trunc(temp / 10);
        }
        
    return sum == number;
}
// Time Complexity: O(d) where d is the number of digits in the number
// Space Complexity: O(1)

// Recursive approach
bool isStrongNumberRec(int number, int &sum){
    if(number == 0) return sum;
    
    int factorial[] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880};
    int digit = number % 10;
    sum += factorial[digit];
    
    return isStrongNumberRec(trunc(number / 10), sum);
}
// Time Complexity: O(d) where d is the number of digits in the number
// Space Complexity: O(d) due to recursive stack space


int main(){
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    
    isStrongNumber(number) ? cout<<"It's a Strong number" : cout<<"It's not a Strong number";
    cout<<endl;
    
    return 0;
}