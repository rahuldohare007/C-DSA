#include<bits/stdc++.h>
using namespace std;

void PrintUniqueElement(const vector<int>& array){
    unordered_map<int, int> freqMap;
    for(int x: array){
        freqMap[x]++;
    }
    for(auto &p : freqMap){
        if(p.second == 1){
            cout<<"Unique Elements: "<<p.first<<" ";
        }
    }
}
// Time Complexity: O(N)
// Space Complexity: O(N)

int main(){
    vector<int> array = {1, 2, 1, 3, 4, 69, 69, 2, 3, 4, 5, 1};
    PrintUniqueElement(array);
    
    return 0;
}
