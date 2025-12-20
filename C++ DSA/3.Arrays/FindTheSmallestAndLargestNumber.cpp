#include <bits/stdc++.h>
using namespace std;

//1. Direct Approach
pair<int,int> FindTheSmallestAndLargestNumber(const vector<int> &arr){
    int largest = arr[0];
    int smallest = arr[0];

    for(int x : arr){
        if(x > largest) largest = x;
        if(x < smallest) smallest = x;
    }
    return {largest, smallest};
}

int main(){
    vector<int> array = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, -69};
    pair<int,int> result = FindTheSmallestAndLargestNumber(array);

    cout << "Max: " << result.first << "\n";
    cout << "Min: " << result.second << "\n";

    return 0;
}
// Time Complexity: O(N)
// Space Complexity: O(1)


// 2. using STL
pair<int,int> getMinMax(const vector<int>& arr){
    int mn = *min_element(arr.begin(), arr.end());
    int mx = *max_element(arr.begin(), arr.end());
    return {mx, mn};
}
// Time Complexity: O(N)
// Space Complexity: O(1)

// 3. Using minmax_element (Fastest: One Pass Only)
pair<int,int> getMinMax(const vector<int>& arr){
    auto p = minmax_element(arr.begin(), arr.end());
    return { *p.second, *p.first };
}
// Time Complexity: O(N)
// Space Complexity: O(1)

// 4. Single Loop Without STL
pair<int,int> getMinMax(const vector<int>& arr){
    int mn = arr[0], mx = arr[0];

    for(int x : arr){
        if(x < mn) mn = x;
        else if(x > mx) mx = x;
    }
    return {mx, mn};
}
// Time Complexity: O(N)
// Space Complexity: O(1)
