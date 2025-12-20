#include <bits/stdc++.h>
using namespace std;
// 1 2 3 4 5
// 5 4 3 2 1
// 1 2 3 4 5
// 5 4 3 2 1
// 1 2 3 4 5

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    int count = 0;

    for (int row = 1; row <= number; row++)
    {
        for (int col = 1; col <= number; col++)
        {
            if (row % 2 == 0)
            {
                cout << count-- << "  ";
            }
            else
            {
                cout << ++count << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}