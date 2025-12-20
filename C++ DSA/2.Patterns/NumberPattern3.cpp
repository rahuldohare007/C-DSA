#include <bits/stdc++.h>
using namespace std;

// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15

int main()
{
    int number;
    cout << "Enter a number: ";
    cin>>number;
    int count=0;

    for(int row=1; row<=number; row++)
    {
        for(int col=1; col <= row; col++)
        {
            cout<<++count<<" ";
        }
        cout<<endl;
    }
    return 0;
}