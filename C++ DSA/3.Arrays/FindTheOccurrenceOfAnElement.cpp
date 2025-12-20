#include<bits/stdc++.h>
using namespace std;

int FindOccurrence(const vector<int>& array, int element){
        int count = 0;
        for(int x: array){
            if(x == element) count++;
        }
        return count;
}
// Time Complexity: O(N)
// Space Complexity: O(1)

// Using STL
int FindOccurrenceSTD(const vector<int>& array, int element){
    return count(array.begin(), array.end(), element);
}
// Time Complexity: O(N)
// Space Complexity: O(1)

// Using Hash Map
int FindOccurrenceHashMap(const vector<int>& array, int element){
    unordered_map<int, int> freqMap;
    for(int x: array){
        freqMap[x]++;
    }
    return freqMap[element];
}
// Time Complexity: O(N)
// Space Complexity: O(N)

int main(){
    vector<int> array = {1,1,2,3,6,4,5,6,6};
    int element = 6;
    int result = FindOccurrence(array, element);
    int result2 = FindOccurrenceSTD(array, element);
    int result3 = FindOccurrenceHashMap(array, element);
    
    cout<<"Occurrences of " <<element<<" : "<<result;
    cout<<"\nOccurrences of "<<element<<" : "<<result2;
    cout<<"\nOccurrences of "<<element<<" : "<<result3;
    return 0;
}
