//     *
//   * * *
// * * * * *
//   * * *
//     *

#include <bits/stdc++.h>
using namespace std;

int main(){
    int number;
    cout<<"Enter a number: ";
    cin>>number;

    // Upper half
    for(int i=1; i<=number; i+=2){
        // Spaces
        for(int j=number; j>i; j-=2){
            cout<<"  ";
        }
        // Stars
        for(int k=1; k<=i; k++){
            cout<<"* ";
        }
        cout<<endl;
    }

    // Lower half
    for(int i=number-2; i>=1; i-=2){
        // Spaces
        for(int j=number; j>i; j-=2){
            cout<<"  ";
        }
        // Stars
        for(int k=1; k<=i; k++){
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}