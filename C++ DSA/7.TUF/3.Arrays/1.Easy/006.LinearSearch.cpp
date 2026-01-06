#include <bits/stdc++.h>
using namespace std;

void linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            cout << "Element found at index: " << i << endl;
            return;
        }
    }
    cout << "Element not found in the array." << endl;
}
// Time Complexity: O(n)
// Space Complexity: O(1)


int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 3;

    linearSearch(arr, n, key);
 
    return 0;
}