// if n = 4;
//     1
//    121
//   12321
//  1234321   

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n = 4;
    int row = 1;
    while (row <= n){
        //priting spaces
        int spaces = n - row;
        while(spaces--){
            cout<<" ";
        }

        //printing next triangle
        int col =1;
        while(col<=row){
            cout<<col;
            col++;
        }
        //printing next traingle
        int start = row-1;
        while(start){
            cout<<start;
            start--;
        }

        cout<<endl;
        row++;
    }
    
    
    return 0;
}