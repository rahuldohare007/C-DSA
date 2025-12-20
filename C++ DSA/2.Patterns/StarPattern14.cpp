//     *
//   *   *
// *       *
//   *   *
//     *

#include <bits/stdc++.h>
using namespace std;

int main(){
    int number;
    cout<<"Enter a number: ";
    cin>>number;

    // Upper part
    for(int i=1; i<=number; i++){
        for(int j=1; j<=number-i; j++){
            cout<<"  ";
        }
        for(int j=1; j<=(2*i-1); j++){
            if(j==1 || j==(2*i-1)){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }

    // Lower part
    for(int i=number-1; i>=1; i--){
        for(int j=1; j<=number-i; j++){
            cout<<"  ";
        }
        for(int j=1; j<=(2*i-1); j++){
            if(j==1 || j==(2*i-1)){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }

    return 0;
}