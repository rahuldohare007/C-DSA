#include <bits/stdc++.h>
using namespace std;

// Iterative approach
vector<int> FibonacciSeries(int number)
{
    if (number <= 0)
        return {};
    if (number == 1)
        return {0};
    vector<int> series = {0, 1};

    for (int i = 2; i <= number; i++)
    {
        series.push_back(series[i - 1] + series[i - 2]);
    }
    return series;
}
// Time Complexity: O(N)
// Space Complexity: O(N)

// Recursive approach
vector<int> FibonacciSeriesRecursiveHelper(int number, vector<int> &series)
{
    if (series.size() >= number + 1)
        return series;
    int nextValue = series[series.size() - 1] + series[series.size() - 2];
    series.push_back(nextValue);
    return FibonacciSeriesRecursiveHelper(number, series);
}
vector<int> FibonacciSeriesRecursive(int number)
{
    if (number <= 0)
        return {};
    if (number == 1)
        return {0};
    vector<int> series = {0, 1};
    return FibonacciSeriesRecursiveHelper(number, series);
}
// Time Complexity: O(N)
// Space Complexity: O(N)

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    vector<int> result = FibonacciSeries(number);

    cout << "Fibonacci Series: ";
    for (int i : result)
    {
        cout << i << "  ";
    }
    cout << endl;

    return 0;
}