#include <bits/stdc++.h>
using namespace std;

bool isPrime(int number){
    if(number <= 1 ) return false;
    if(number == 2) return true;
    if(number % 2 == 0) return false;
    for(int i = 3; i <= sqrt(number); i += 2){
        if(number % i == 0) return false;
    }
    return true;
}
// Time Complexity: O(sqrt(n))
// Space Complexity: O(1)

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if(isPrime(number)){
        cout << number << " is a prime number." << endl;
    } else {
        cout << number << " is not a prime number." << endl;
    }

    return 0;
}