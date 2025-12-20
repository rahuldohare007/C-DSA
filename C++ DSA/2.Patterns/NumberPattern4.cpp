#include <bits/stdc++.h>
using namespace std;

// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    for (int row = 1; row <= number; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << col << " ";
        }
        cout << endl;
    }
    return 0;
}