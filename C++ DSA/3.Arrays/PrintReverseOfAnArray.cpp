#include <bits/stdc++.h>
using namespace std;

//Using STL
vector<int> Reverse(vector<int> array){
    reverse(array.begin(), array.end());
    return array;
}
// Time Complexity: O(N)
// Space Complexity: O(1)

// Without Using STL - Using Two Pointers
vector<int> Reverse(vector<int> array){
    int start = 0;
    int end = array.size() - 1;
    
    while(start < end){
        swap(array[start], array[end]);
        start++;
        end--;
    }
    return array;
}
// Time Complexity: O(N)
// Space Complexity: O(1)

int main(){
    vector<int> array = {1, 2, 3, 4, 5, 11, 6, 7, 8, 9, 10, -69};
    vector<int> answer = Reverse(array);
    
    for(int item: answer){
        cout<<item<<" ";
    }
    cout<<endl;
}