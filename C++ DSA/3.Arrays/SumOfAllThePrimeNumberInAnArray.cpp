#include <bits/stdc++.h>
using namespace std;

bool isPrime(int number){
    if(number <= 1) return false;
    if(number == 2) return true;
    if(number % 2 == 0) return false;
    
    for(int i = 3; i*i <= number; i += 2){
        if(number % i == 0) return false;
    }
    return true;
}

int SumAllPrime(const vector<int>& array){
    int sum = 0;
    for(int x : array){
        if(isPrime(x)) sum += x;
    }
    return sum;
}

int main(){
    vector<int> array = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int result = SumAllPrime(array);
    
    cout<<result;
    return 0;
}
// Time Complexity: O(n * sqrt(m)), where n is the number of elements in the array and m is the maximum element in the array.
// Space Complexity: O(1)

