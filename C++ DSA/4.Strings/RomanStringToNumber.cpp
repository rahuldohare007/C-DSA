#include <bits/stdc++.h>
using namespace std;

// Using HashMap to store Roman numeral values
void RomanStringToNumber(const string &str)
{
    unordered_map<char, int> romanMap = {
        {'I', 1}, {'V', 5}, {'X', 10},
        {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000},
        {'i', 1}, {'v', 5}, {'x', 10}, {'l', 50},
        {'c', 100}, {'d', 500}, {'m', 1000}};

    int total = 0;
    int n = str.size();

    for (int i = 0; i < n; i++)
    {
        int currentVal = romanMap[str[i]];
        int nextVal = (i + 1 < n) ? romanMap[str[i + 1]] : 0;

        if (nextVal > currentVal)
        {
            total -= currentVal;
        }
        else
        {
            total += currentVal;
        }
    }

    cout << str << " : " << total << endl;
}
// Time Complexity: O(N)
// Space Complexity: O(1)

int main()
{
    RomanStringToNumber("III");
    RomanStringToNumber("iii");
    RomanStringToNumber("iv");
    RomanStringToNumber("IV");
    return 0;
}
