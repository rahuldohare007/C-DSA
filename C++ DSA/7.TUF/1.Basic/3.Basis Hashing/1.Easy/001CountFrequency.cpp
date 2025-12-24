#include <bits/stdc++.h>
using namespace std;

void FrequencyCount(int arr[], int n)
{
    unordered_map<int, int> freqMap;

    // Count frequency of each element
    for (int i = 0; i < n; i++)
    {
        freqMap[arr[i]]++;
    }

    // Print frequency of each element
    for (const auto &pair : freqMap)
    {
        cout << "Element: " << pair.first << ", Frequency: " << pair.second << endl;
    }
}

int main()
{
    int arr[] = {1, 2, 2, 3, 4, 4, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    FrequencyCount(arr, n);

    return 0;
}