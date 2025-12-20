#include <bits/stdc++.h>
using namespace std;

// *
// * *
// * * *
// * * * *
// * * * * *

int main()
{
    int number, count = 0;
    cout << "Enter a number: ";
    cin >> number;

    for (int row = 1; row <= number; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
