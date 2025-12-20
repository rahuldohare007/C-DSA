#include <bits/stdc++.h>
using namespace std;

// * * * * *
// * *   * *
// *   *   *
// * *   * *
// * * * * *

int main()
{
    int number, count = 0;
    cout << "Enter a number: ";
    cin >> number;

    for (int row = 1; row <= number; row++)
    {
        for (int col = 1; col <= number; col++)
        {
            if (row == col || row + col == number + 1 || row == 1 || row == number || col == 1 || col == number)
            {

                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}