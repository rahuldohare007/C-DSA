#include <bits/stdc++.h>
using namespace std;

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

// Iterative approach to print all prime numbers in a given range
void printPrimesInRange(int start, int end)
{
    for (int num = start; num <= end; num++)
    {
        if (num <= 1)
            continue;
        bool isPrime = true;
        for (int i = 2; i <= sqrt(num); i++)
        {
            if (num % i == 0)
            {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
            cout << num << " ";
    }
    cout << endl;
}
// Time complexity: O(n * sqrt(m)) where n is the range size and m is the average number in the range
// Space complexity: O(1)

// Recursive approach to print all prime numbers in a given range
void printPrimeRecursive(int number, int i = 2)
{
    if (number <= 1)
        return;
    if (i > sqrt(number))
    {
        cout << number << " ";
        return;
    }
    if (number % i == 0)
        return;
    printPrimeRecursive(number, i + 1);
}

// Time complexity: O(n * sqrt(m)) where n is the range size and m is the average number in the range
// Space complexity: O(sqrt(m)) due to recursion stack

int main()
{
    int start, end;
    cout << "Enter the range (start end): ";
    cin >> start >> end;
    cout << "Prime numbers in the range [" << start << ", " << end << "] using iteration are: ";
    printPrimesInRange(start, end);
    cout << "Prime numbers in the range [" << start << ", " << end << "] using recursion are: ";
    for (int num = start; num <= end; num++)
    {
        printPrimeRecursive(num);
    }
    return 0;
}