//  *
//  * *
//  * * *
//  * *
//  *

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    for (int row = 1; row <= 2 * number - 1; row++)
    {
        for (int col = 1; col <= number; col++)
        {
            if (row <= number)
            {
                if (col <= row)
                {
                    cout << "* ";
                }
            }
            else
            {
                if (2 * number - row >= col)
                {
                    cout << "* ";
                }
            }
        }
        cout << endl;
    }
    return 0;
}