#include<bits/stdc++.h>
using namespace std;

// Using push_back
vector<int> MergeTwoArrays(const vector<int>& array, const vector<int>& array2){
    vector<int> result;
    for(int x: array){
        result.push_back(x);
    }
    for(int x: array2){
        result.push_back(x);
    }
    return result;
}
// Time Complexity: O(N + M) where N and M are sizes of the two arrays
// Space Complexity: O(N + M) for the result array

// Using insert to optimize
vector<int> MergeTwoArrays(const vector<int>& a, const vector<int>& b){
    vector<int> result;
    result.reserve(a.size() + b.size()); // avoid reallocations

    result.insert(result.end(), a.begin(), a.end());
    result.insert(result.end(), b.begin(), b.end());

    return result;
}
// Time Complexity: O(N + M) where N and M are sizes of the two arrays
// Space Complexity: O(N + M) for the result array

// Using copy constructor and insert
vector<int> MergeTwoArrays(const vector<int>& a, const vector<int>& b){
    vector<int> result = a;                   // copy first array
    result.insert(result.end(), b.begin(), b.end());
    return result;
}
// Time Complexity: O(N + M) where N and M are sizes of the two arrays
// Space Complexity: O(N + M) for the result array

int main(){
    vector<int> array = {10, 9, 8, 7, 6};
    vector<int> array2 = {1, 2, 3, 4, 5};
    
    vector<int> result = MergeTwoArrays(array,array2);

    cout<<"Result: ";
    
    for(int x: result){
        cout<<x<<" ";
    }
    return 0;
}
