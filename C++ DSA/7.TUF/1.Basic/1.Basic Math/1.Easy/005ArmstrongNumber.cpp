#include <bits/stdc++.h>
using namespace std;

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

int main(){
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    
    isArmstrong(number) ? cout<<"It's an Armstrong number" : cout<<"It's not an Armstrong number";
    cout<<endl;
    
    return 0;
}