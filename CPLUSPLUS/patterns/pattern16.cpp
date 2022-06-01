// // if n = 4
// // then
// * * *  *
//   * * *
//      * *
//        *

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;
    int row = 1;
    while(row<=n){
        int spaces = row -1;
        while(spaces){
            cout<<" ";
            spaces--;
        }
        int col = 1;
        
        while(col<=(n-row+1)){ // column is dependent upon its n-row+1
        cout<<"*";
        col++;
        }

        cout<<endl;
        row++;
    }   
    
    return 0;
}
