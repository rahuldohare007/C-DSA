#include <bits/stdc++.h>
using namespace std;

int countSubarrays(vector<int> &A, int k)
{
    int count = 0;
    int prefixXor = 0;
    unordered_map<int, int> freq;
    freq[0] = 1;

    for (int num : A)
    {
        prefixXor ^= num;
        int target = prefixXor ^ k;
        if (freq.find(target) != freq.end())
        {
            count += freq[target];
        }
        freq[prefixXor]++;
    }
    return count;
}
// Time Complexity: O(N)
// Space Complexity: O(N)

int main()
{
    vector<int> A = {4, 2, 2, 6, 4};
    int k = 6;
    int result = countSubarrays(A, k);
    cout << "Number of subarrays with XOR equal to " << k << ": " << result << endl;

    return 0;
}