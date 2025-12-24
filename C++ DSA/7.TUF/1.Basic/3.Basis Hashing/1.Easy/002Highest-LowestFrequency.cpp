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

    int highestFreq = 0;
    int lowestFreq = INT_MAX;
    int highestFreqElement = -1;
    int lowestFreqElement = -1;
    // Find highest and lowest frequency elements
    for (const auto &pair : freqMap)
    {
        if (pair.second > highestFreq)
        {
            highestFreq = pair.second;
            highestFreqElement = pair.first;
        }
        if (pair.second < lowestFreq)
        {
            lowestFreq = pair.second;
            lowestFreqElement = pair.first;
        }
    }

    cout << "Highest frequency element: " << highestFreqElement << endl;
    cout << "Lowest frequency element: " << lowestFreqElement << endl;
}
// Time Complexity: O(n)
// Space Complexity: O(n)

int main()
{
    int arr[] = {1, 2, 2, 3, 4, 4, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    FrequencyCount(arr, n);

    return 0;
}
