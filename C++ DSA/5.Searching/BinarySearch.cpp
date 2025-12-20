#include<bit/stdc++.h>
using namespace std;

int binarySearchIterative(vector<int>& arr, int target){
    int right = arr.size() - 1;
    int left = 0;
    
    while(left <= right){
        int mid = left + floor((right - left) / 2)
        if(arr[mid] == target){
            return mid;
        }else if(arr[mid] < target){
            left = mid + 1;
        }else{
            right = mid - 1;
        }
    }
    return -1;
}
// Time Complexity: O(log N)
// Space Complexity: O(1)

int binarySearchRecursive(vector<int>& arr, int target, int left, int right){
    if(left > right){
        return -1;
    }
    int mid = left + floor((right - left) / 2);
    if(arr[mid] == target){
        return mid;
    }else if(arr[mid] < target){
        return binarySearchRecursive(arr, target, mid + 1, right);
    }else{
        return binarySearchRecursive(arr, target, left, mid - 1);
    }
}
// Time Complexity: O(log N)
// Space Complexity: O(log N)

int main() {
    vector<int> arr = {10, 20, 30, 40, 50, 60};
    int target = 50;
    
    cout<<"Result: "<<binarySearchIterative(arr, target);
    return 0;
}