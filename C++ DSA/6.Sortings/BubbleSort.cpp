#include<bits/stdc++.h>
using namespace std;

vector<int> bubbleSort(vector<int>& arr) {
    int n = arr.size();
    bool swapped;
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        // If no two elements were swapped in the inner loop, then break
        if (!swapped) {
            break;
        }
    }
    return arr;
}
// Time Complexity:
// Best Case: O(n),
// Average Case: O(n^2),
// Worst Case: O(n^2)

// Space Complexity: O(1)

vector<int> bubbleSort2(vector<int>& arr){
    int n = arr.size();
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    return arr;
}
// Time Complexity:
// Best Case: O(n^2),
// Average Case: O(n^2),
// Worst Case: O(n^2)

// Space Complexity: O(1)

int main(){
    vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
    
    vector<int> sortedArr = bubbleSort(arr);
    
    cout << "Sorted array: ";
    for(int num : sortedArr){
        cout << num << " ";
    }
    cout << endl;

    return 0;
}