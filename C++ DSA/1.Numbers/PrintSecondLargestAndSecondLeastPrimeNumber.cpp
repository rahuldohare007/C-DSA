#include <bits/stdc++.h>
using namespace std;

// Print second largest and second least prime numbers in a given range
// Iterative approach
bool isPrime(int number) {
    if (number <= 1)
        return false;
    if (number == 2)
        return true;
    if (number % 2 == 0)
        return false;
    for (int i = 3; i <= sqrt(number); i += 2) {
        if (number % i == 0)
            return false;
    }
    return true;
}
void printSecondLargestAndSecondLeastPrime(int start, int end) {
    vector<int> primes;
    for (int num = start; num <= end; num++) {
        if (isPrime(num)) {
            primes.push_back(num);
        }
    }
    if (primes.size() < 2) {
        cout << "Not enough prime numbers in the range." << endl;
        return;
    }
    cout << "Second least prime: " << primes[1] << endl;
    cout << "Second largest prime: " << primes[primes.size() - 2] << endl;
}
// Time complexity: O(n * sqrt(m)) where n is the range size and m is the average number in the range
// Space complexity: O(k) where k is the number of primes found

// Recursive approach
bool isPrimeRecursive(int number, int divisor = 2) {
    if (number <= 1)
        return false;
    if (divisor > sqrt(number))
        return true;
    if (number % divisor == 0)
        return false;
    return isPrimeRecursive(number, divisor + 1);
}
void printSecondLargestAndSecondLeastPrimeRecursive(int start, int end) {
    vector<int> primes;
    function<void(int)> findPrimes = [&](int num) {
        if (num > end)
            return;
        if (isPrimeRecursive(num)) {
            primes.push_back(num);
        }
        findPrimes(num + 1);
    };
    findPrimes(start);
    if (primes.size() < 2) {
        cout << "Not enough prime numbers in the range." << endl;
        return;
    }
    cout << "Second least prime: " << primes[1] << endl;
    cout << "Second largest prime: " << primes[primes.size() - 2] << endl;
}

// Time complexity: O(n * sqrt(m)) where n is the range size and m is the average number in the range
// Space complexity: O(k + sqrt(m)) where k is the number of primes found and sqrt(m) is due to recursion stack

int main() {
    int start, end;
    cout << "Enter the range (start end): ";
    cin >> start >> end;

    cout << "Iterative approach:" << endl;
    printSecondLargestAndSecondLeastPrime(start, end);

    cout << "Recursive approach:" << endl;
    printSecondLargestAndSecondLeastPrimeRecursive(start, end);

    return 0;
}