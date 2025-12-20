#include<bit/stdc++.h>
using namespace std;

int linearSearch(vector<int>& arr, int target) {
  int n = arr.size();
  for(int i = 0; i < n; i++){
    if(arr[i] == target)
        return i;  
  }
  return -1;
}
// Time Complexity: O(N)
// Space Complexity: O(1)

int main() {
    vector<int> arr = {1, 5, 69, 420, 500, 56};
    int target = 5;
    
    cout<<"Result: "<<linearSearch(arr, target);
    return 0;
}
