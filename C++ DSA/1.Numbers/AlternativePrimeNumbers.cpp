#include <iostream>
#include <vector>
using namespace std;

// Iterative primality check
bool isPrime(int number) {
    if (number <= 1) return false;
    if (number == 2) return true;
    if (number % 2 == 0) return false;
    for (int i = 3; i * i <= number; i += 2) {
        if (number % i == 0) return false;
    }
    return true;
}

// Generate alternative primes iteratively
vector<int> IterativePrime(int start, int end) {
    vector<int> primes;
    bool skip = false;
    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            if (!skip) primes.push_back(i);
            skip = !skip; // flip skip flag
        }
    }
    return primes;
}
// Time Complexity: O(n√m) where n is the range size and m is the average number checked for primality
// Space Complexity: O(k) where k is the number of alternative primes found

// Recursive primality check
bool isPrimeRecursive(int number, int divisor) {
    if (number <= 1) return false;
    if (divisor * divisor > number) return true;
    if (number % divisor == 0) return false;
    return isPrimeRecursive(number, divisor + 1);
}

// Generate alternative primes recursively
void RecursivePrime(int start, int end, bool &skip) {
    if (start > end) return;
    if (isPrimeRecursive(start, 2)) {
        if (!skip) cout << start << " ";
        skip = !skip;
    }
    RecursivePrime(start + 1, end, skip);
}
// Time Complexity: O(n√m) where n is the range size and m is the average number checked for primality
// Space Complexity: O(n) due to recursion stack

int main() {
    int start, end;
    cin >> start >> end;

    // Iterative approach
    vector<int> primes = IterativePrime(start, end);
    cout << "Iterative approach: ";
    for (int prime : primes) {
        cout << prime << " ";
    }
    cout << endl;

    // Recursive approach
    cout << "Recursive approach: ";
    bool skip = false;
    RecursivePrime(start, end, skip);
    cout << endl;

    return 0;
}
