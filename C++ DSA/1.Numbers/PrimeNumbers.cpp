#include <bits/stdc++.h>
using namespace std;

// Iterative approach
bool isPrime(int number)
{
    if (number <= 1)
        return false;
    else if (number == 2)
        return true;
    else if (number % 2 == 0)
        return false;
    for (int i = 3; i <= sqrt(number); i += 2)
    {
        if (number % i == 0)
            return false;
    }
    return true;
}
// Time complexity: O(sqrt(n))
// Space complexity: O(1)

// Recursive approach
bool isPrimeRecursive(int number, int i = 2)
{
    if (number <= 1)
        return false;
    if (i > sqrt(number))
        return true;
    if (number % i == 0)
        return false;
    return isPrimeRecursive(number, i + 1);
}
// Time complexity: O(sqrt(n))
// Space complexity: O(sqrt(n)) due to recursion stack

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    isPrime(number) ? cout << number << " is a prime number." << endl
                    : cout << number << " is not a prime number (iterative check)." << endl;

    isPrimeRecursive(number) ? cout << number << " is a prime number (recursive check)." << endl
                             : cout << number << " is not a prime number (recursive check)." << endl;
    return 0;
}