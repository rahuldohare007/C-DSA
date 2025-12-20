#include <bits/stdc++.h>
using namespace std;

int FindIndex(const vector<int>& array, int number){
    for(int index = 0; index < array.size(); index++){
        if(array[index] == number) return index;
    }
    return -1;
}
// Time Complexity: O(N)
// Space Complexity: O(1)

//STL Method
int FindIndexUsingFind(const vector<int>& arr, int number) {
    auto it = find(arr.begin(), arr.end(), number);

    if (it != arr.end())
        return it - arr.begin();   // convert iterator to index
    else
        return -1;                 
}
// Time Complexity: O(N)
// Space Complexity: O(1)

int main(){
    // vector<int> array = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> array = {11,45,2,85,69,36};
    int result1 = FindIndex(array, 11);
    int result2 = FindIndexUsingFind(array, 85);
    
    cout<<"Linear Search: "<<result1;
    cout<<"\nSTL Find: "<<result2;

    return 0;
}