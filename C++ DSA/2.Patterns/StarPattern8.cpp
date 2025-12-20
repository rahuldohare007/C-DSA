#include <bits/stdc++.h>
using namespace std;

// * * * * *
//   *     *
//     *   *
//       * *
//         *

int main()
{
    int number, count = 0;
    cout << "Enter a number: ";
    cin >> number;

    for (int row = 1; row <= number; row++)
    {
        for (int col = 1; col <= number; col++)
        {
            if (col == number || row == col || row == 1)
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