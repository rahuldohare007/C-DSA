#include<bits/stdc++.h>
using namespace std;

vector<int> SendZerosToEnd(vector<int> array){
    int countZeros = 0;
    vector<int> result;
    
    for(int x: array){
        if(x != 0){
           result.push_back(x); 
        }else{
            countZeros++;
        }
    }
    while(countZeros > 0){
        result.push_back(0);
        countZeros--;
    }
    return result;
}
// Time Complexity: O(N)
// Space Complexity: O(N)

// Using Two Pointer Approach
vector<int> SendZerosToEnd(vector<int> arr){
    int pos = 0;
    
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] != 0){
            swap(arr[pos], arr[i]);
            pos++;
        }
    }
    return arr;
}
// Time Complexity: O(N)
// Space Complexity: O(1)

int main(){
    vector<int> array = {11, 2, 0, 4, 0, 5, 0};
    vector<int> result = SendZerosToEnd(array);
    cout<<"Result: ";
    
    for(int x: result){
        cout<<x<<" ";
    }
    return 0;
}
