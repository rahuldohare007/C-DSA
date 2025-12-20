#include <bits/stdc++.h>
using namespace std;

// Check if a number is prime (iterative)
bool isPrime(int number) {
    if (number <= 1) return false;
    if (number == 2) return true;
    if (number % 2 == 0) return false;
    for (int i = 3; i <= sqrt(number); i += 2) {
        if (number % i == 0) return false;
    }
    return true;
}

// Iterative approach to print first 10 primes in range
void print10PrimesInRange(int start, int end) {
    int count = 0;
    for (int num = start; num <= end && count < 10; num++) {
        if (isPrime(num)) {
            cout << num << " ";
            count++;
        }
    }
    cout << endl;
}

// Time complexity: O(n * sqrt(m)) where n is the range size and m is the average number in the range
// Space complexity: O(1)

// Recursive function to check prime
bool isPrimeRecursive(int number, int divisor = 2) {
    if (number <= 1) return false;
    if (divisor > sqrt(number)) return true;
    if (number % divisor == 0) return false;
    return isPrimeRecursive(number, divisor + 1);
}

// Recursive approach to print first 10 primes in range
void print10PrimesInRangeRecursive(int start, int end, int count = 0) {
    if (start > end || count >= 10) return;

    if (isPrimeRecursive(start)) {
        cout << start << " ";
        count++;
    }
    print10PrimesInRangeRecursive(start + 1, end, count);
}

// Time complexity: O(n * sqrt(m)) where n is the range size and m is the average number in the range
// Space complexity: O(sqrt(m)) due to recursion stack

int main() {
    int start, end;
    cout << "Enter the range (start end): ";
    cin >> start >> end;

    cout << "Iterative approach: ";
    print10PrimesInRange(start, end);

    cout << "Recursive approach: ";
    print10PrimesInRangeRecursive(start, end);

    cout << endl;
    return 0;
}
