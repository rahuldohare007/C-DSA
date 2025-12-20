#include<bits/stdc++.h>
using namespace std;

// using unordered_map
vector<int> PrintTheDuplicates(const vector<int>& array){
    unordered_map<int, int> freqMap;
    vector<int> result;
    for(int x: array){
        freqMap[x]++;
    }
    for(auto &p : freqMap){
        if(p.second > 1){
            result.push_back(p.first);
        }
    }
    return result;
}
// Time Complexity: O(N) where N is the number of elements in the array
// Space Complexity: O(N) for the frequency map

// using unordered_set
vector<int> PrintTheDuplicates(const vector<int>& array){
    unordered_set<int> seen;
    unordered_set<int> duplicates;

    for(int x : array){
        if(seen.count(x))
            duplicates.insert(x);
        else
            seen.insert(x);
    }
    return vector<int>(duplicates.begin(), duplicates.end());
}
// Time Complexity: O(N) where N is the number of elements in the array
// Space Complexity: O(N) for the sets

int main(){
    vector<int> array = {1, 2, 1, 3, 4, 69, 69, 2, 3, 4, 5, 1};
    vector<int> result = PrintTheDuplicates(array);
    cout<<"Duplicate Elements: ";
    
    for(int x: result){
        cout<<x<<" ";
    }
    return 0;
}
