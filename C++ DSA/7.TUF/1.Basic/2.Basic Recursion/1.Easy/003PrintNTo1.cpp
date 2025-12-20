#include <bits/stdc++.h>
using namespace std;

// Forward Recursion to print numbers from N to 1
void print(int number, int current = 1) {
    // Base Case
    if(current > number) {
        return;
    }
    // Recursive Call
    print(number, current + 1);
    cout<<current<<endl;
}
// Time Complexity: O(N)
// Space Complexity: O(N) [Auxiliary Stack Space]


// Backward Recursion to print numbers from N to 1
void printBackward(int number) {
    // Base Case
    if(number == 0) {
        return;
    }
    // Recursive Call
    printBackward(number - 1);
    cout<<number<<endl;
}
// Time Complexity: O(N)
// Space Complexity: O(N) [Auxiliary Stack Space]

int main(){
    int number;
    cout<<"Enter a number: ";
    cin>>number;

    print(number);
    return 0;
}