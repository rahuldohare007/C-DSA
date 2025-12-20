#include<bits/stdc++.h>
using namespace std;

int FindSecondLargest(vector<int> array){
    int size = array.size();
    
    if(size < 2) return -1;
    
    sort(array.begin(), array.end());       

    int largest = array[size - 1];

    // find the element just smaller than largest
    for(int i = size - 2; i >= 0; i--){
        if(array[i] != largest)
            return array[i];
    }
    return -1;  
}
// Time Complexity: O(N log N) due to sorting
// Space Complexity: O(1)

int FindSecondLargest(const vector<int>& arr){
    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for(int x : arr){
        if(x > largest){
            secondLargest = largest;
            largest = x;
        }
        else if(x > secondLargest && x != largest){
            secondLargest = x;
        }
    }
    return secondLargest;
}
// Time Complexity: O(N)
// Space Complexity: O(1)

int main(){
    vector<int> array = {1,2,3,4,5,6,6};
    int result = FindSecondLargest(array);
    
    cout << "Second Largest: " << result;
    return 0;
}
