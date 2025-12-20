#include <bits/stdc++.h>
using namespace std;

int FindTheLastIndexOfAnElement(const vector<int>& array, int number){
    for(int index = array.size() - 1; index >= 0; index--){
        if(array[index] == number) return index;
    }
    return -1;
}
// Time Complexity: O(N)
// Space Complexity: O(1)

int FindLastIndex(const vector<int>& arr, int number) {
    auto it = find(arr.rbegin(), arr.rend(), number);
    if(it == arr.rend()) return -1;
    return arr.size() - 1 - (it - arr.rbegin());
}
// Time Complexity: O(N)
// Space Complexity: O(1)

int FindLastIndex_STL(const vector<int>& arr, int number){
    auto it = find_end(arr.begin(), arr.end(),
                       &number, (&number)+1);
    if(it == arr.end()) return -1;
    return it - arr.begin();
}
// Time Complexity: O(N)
// Space Complexity: O(1)

int main(){
    // vector<int> array = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> array = {11,45,69,2,85,69,36};
    int result1 = FindTheLastIndexOfAnElement(array, 69);
    int result2 = FindLastIndex(array, 69);
    int result3 = FindLastIndex_STL(array, 69);
    
    cout<<"Linear Search: "<<result1;
    cout<<"\nReverse Iterator: "<<result2;
    cout<<"\nSTL find_end: "<<result3;
    return 0;
}