#include <bits/stdc++.h>
using namespace std;

// Perfect Number
// Iterative Approach
bool isPerfect(int n)
{
    int sum = 0;
    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    return sum == n;
}
// Time Complexity: O(n)
// Space Complexity: O(1)

// Recursive Approach
int sumOfDivisors(int n, int i)
{
    if (i == n / 2 + 1)
    {
        return 0;
    }
    if (n % i == 0)
    {
        return i + sumOfDivisors(n, i + 1);
    }
    return sumOfDivisors(n, i + 1);
}
// Time Complexity: O(n)
// Space Complexity: O(n) (due to recursion stack)

bool isPerfectRec(int n)
{
    int sum = sumOfDivisors(n, 1);
    return sum == n;
}

// Optimized Approach
bool isPerfectOpt(int n)
{
    if (n == 1)
        return false; // 1 is not a perfect number
    int sum = 1;      // 1 is a divisor of every number
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            sum += i;
            if (i != n / i)
            { // Add the complementary divisor
                sum += n / i;
            }
        }
    }
    return sum == n;
}
// Time Complexity: O(sqrt(n))
// Space Complexity: O(1)

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (isPerfect(n))
    {
        cout << n << " is a Perfect Number (Iterative)" << endl;
    }
    else
    {
        cout << n << " is not a Perfect Number (Iterative)" << endl;
    }

    if (isPerfectRec(n))
    {
        cout << n << " is a Perfect Number (Recursive)" << endl;
    }
    else
    {
        cout << n << " is not a Perfect Number (Recursive)" << endl;
    }

    if (isPerfectOpt(n))
    {
        cout << n << " is a Perfect Number (Optimized)" << endl;
    }
    else
    {
        cout << n << " is not a Perfect Number (Optimized)" << endl;
    }

    return 0;
}