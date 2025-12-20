#include <bits/stdc++.h>
using namespace std;

void printName(string name, int count, int numofTimes) {
    // Base Case
    if(count == numofTimes) {
        return;
    }
    cout<<name<<endl;
    // Recursive Call
    printName(name, count + 1, numofTimes);

}
// Time Complexity: O(N)
// Space Complexity: O(N) [Auxiliary Stack Space]

int main() {
    string name;
    cout<<"Enter your name: ";
    cin>>name;

    int numofTimes;
    cout<<"Enter number of times to print your name: ";
    cin>>numofTimes;

    printName(name, 0,numofTimes);
    return 0;
}