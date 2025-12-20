//     *
//   * * *
// * * * * *

#include <bits/stdc++.h>
using namespace std;

int main(){
    int number;
    cout<<"Enter a number: ";
    cin>>number;

    for(int row=1; row<=number; row++){
        //Adding spaces
        for(int j=row; j<number; j++){
            cout<<"  ";
        }
        //Adding stars
        for(int k=1; k<=(2*row-1); k++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}