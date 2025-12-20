#include <bits/stdc++.h>
using namespace std;

void sumOfNNumbers(int n, int &sum) {
    // Base case
    if (n == 0) {
        return;
    }
    // Recursive case
    sum += n;
    sumOfNNumbers(n - 1, sum);
}
// Time Complexity: O(N)
// Space Complexity: O(N) due to recursion stack

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    int sum = 0;
    sumOfNNumbers(n, sum);

    cout << "Sum of first " << n << " natural numbers is: " << sum << endl;
    return 0;
}
