#include <bits/stdc++.h>
using namespace std;

// Recursive factorial
int Factorial(int number)
{
    if (number == 0 || number == 1)
        return 1;
    return number * Factorial(number - 1);
}
// Time Complexity: O(n)
// Space Complexity: O(n) (due to recursion stack)

// Iterative factorial
int FactorialIterative(int number)
{
    int result = 1;
    for (int i = 1; i <= number; i++)
    {
        result *= i;
    }
    return result;
}
// Time Complexity: O(n)
// Space Complexity: O(1)

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    cout << Factorial(number) << endl;
    return 0;
}