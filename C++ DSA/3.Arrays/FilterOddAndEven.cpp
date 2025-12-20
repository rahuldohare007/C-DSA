#include <bits/stdc++.h>
using namespace std;

pair<vector<int>, vector<int>> FilterOddEven(vector<int> &arr)
{
    vector<int> Even, Odd;

    for (int i : arr)
    {
        if (i % 2 == 0)
        {
            Even.push_back(i);
        }
        else
        {
            Odd.push_back(i);
        }
    }
    return {Even, Odd};
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    pair<vector<int>, vector<int>> result = FilterOddEven(arr);
    vector<int> Even = result.first;
    vector<int> Odd = result.second;

    cout << "Even: ";
    for (int i : Even)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "Odd: ";
    for (int j : Odd)
    {
        cout << j << " ";
    }
    return 0;
}