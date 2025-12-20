#include <bits/stdc++.h>
using namespace std;

vector<int> printAllDivisors(int n) {
    vector<int> divisors;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            divisors.push_back(i);
            if (i != n / i) {
                divisors.push_back(n / i);
            }
        }
    }
    sort(divisors.begin(), divisors.end());
    return divisors;
}
// Time Complexity: O(sqrt(n))
// Space Complexity: O(sqrt(n))

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    vector<int> divisors = printAllDivisors(n);

    cout << "Divisors of " << n << " are: ";
    for (int divisor : divisors) {
        cout << divisor << " ";
    }
    cout << endl;

    return 0;
}