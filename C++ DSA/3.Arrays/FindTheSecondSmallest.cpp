#include<bits/stdc++.h>
using namespace std;

int FindSecondSmallest(vector<int> array){
    int size = array.size();
    if(size < 2) return -1;

    sort(array.begin(), array.end());     

    int smallest = array[0];

    for(int i = 1; i < size; i++){
        if(array[i] != smallest)
            return array[i]; // first number greater than smallest
    }
    return -1;  // all elements are equal
}
// Time Complexity: O(N log N) due to sorting
// Space Complexity: O(1)

int FindSecondSmallest(const vector<int>& arr){
    int smallest = INT_MAX;
    int secondSmallest = INT_MAX;

    for(int x : arr){
        if(x < smallest){
            secondSmallest = smallest;
            smallest = x;
        }
        else if(x < secondSmallest && x != smallest){
            secondSmallest = x;
        }
    }
    return secondSmallest == INT_MAX ? -1 : secondSmallest;
}
// Time Complexity: O(N)
// Space Complexity: O(1)

int main(){
    vector<int> array = {1,1,2,3,4,5,6,6};
    int result = FindSecondSmallest(array);
    
    cout << "Second Smallest: " << result;
    return 0;
}



