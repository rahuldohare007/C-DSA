#include <bits/stdc++.h>
using namespace std;

string CrazyString(string str){
    for(int i = 0; i < str.size(); i++){
        if(i % 2 == 0)
            str[i] = toupper((unsigned char)str[i]);
        else
            str[i] = tolower((unsigned char)str[i]);
    }
    return str;
}
// Time Complexity: O(N)
// Space Complexity: O(1)

int main(){
   string str = "Rahul Dohare";
   string result = CrazyString(str);
   
   cout<<"Result: "<<result;
    return 0;
}
