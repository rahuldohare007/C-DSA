#include <bits/stdc++.h>
using namespace std;

int findGCD(int g1, int g2){
    for(int i = min(g1,g2); i > 0; i--){
        if(g1 % i == 0 && g2 % i == 0){
            return i;
        }
    }
    return 1;
}

int main(){
    int g1 , g2;
    cout<<"Enter numbers: ";
    cin>>g1>>g2;
    
    int result = findGCD(g1, g2);
    cout << "GCD of " << g1 << " and " << g2 << " is: " << result << endl;
    
    return 0;
}

// Time Complexity: O(min(g1, g2))
// Space Complexity: O(1)