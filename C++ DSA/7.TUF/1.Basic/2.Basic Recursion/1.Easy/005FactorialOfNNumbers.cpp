#include <bits/stdc++.h>
using namespace std;

// Recursive function to calculate factorial of first N numbers
void factorialOfNNumbers(int n, int &factorial)
{
    // Base case
    if (n == 0 || n == 1)
    {
        return;
    }
    // Recursive case
    factorial *= n;
    factorialOfNNumbers(n - 1, factorial);
}
// Time Complexity: O(N)
// Space Complexity: O(N) due to recursion stack

// Iterative function to calculate factorial of first N numbers
void factorialOfNNumbersIterative(int n, int &factorial)
{
    factorial = 1;
    for (int i = 2; i <= n; i++)
    {
        factorial *= i;
    }
}
// Time Complexity: O(N)
// Space Complexity: O(1)

int main()
{
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    // Using recursive approach
    int factorialRecursive = 1;
    factorialOfNNumbers(n, factorialRecursive);
    cout << "Factorial of " << n << " using recursion is: " << factorialRecursive << endl;

    // Using iterative approach
    int factorialIterative;
    factorialOfNNumbersIterative(n, factorialIterative);
    cout << "Factorial of " << n << " using iteration is: " << factorialIterative << endl;

    return 0;
}
