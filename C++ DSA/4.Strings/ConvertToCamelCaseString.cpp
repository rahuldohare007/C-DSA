#include <bits/stdc++.h>
using namespace std;

string ConvertToCamelCaseString(string str){
    string result = "";
    int n = str.size();
    
    for(int i =0; i < n; i++){
        if(i == 0){
            result += tolower(str[i]);
        }
        else if(str[i] == ' '){
            i++;
            result += toupper(str[i]);
        }
        else{
            result += str[i];
        }

    }

    return result;
}

int main(){
   string str = "Welcome to javascript";
   string result = ConvertToCamelCaseString(str);
   
   cout<<"Result: "<<result;
    return 0;
}
