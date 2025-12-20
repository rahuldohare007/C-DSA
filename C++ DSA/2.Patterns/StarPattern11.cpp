// * * * * *
//   * * *
//     *

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    for (int i = number; i >= 1; i -= 2)
    {
        // Print leading spaces
        for (int j = 0; j < (number - i) / 2; j++)
        {
            cout << "  ";
        }
        // Print stars
        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}