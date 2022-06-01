// if n == 4
// then 
// ****
// ***
// *
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n = 4;
    int row=1;
    while(row<=n){
        int col = 1;
        while(col<= (n-row+1)){
            cout<<"* ";
            col++;

        }
        cout<<endl;
        row++;
    }
    
    return 0;
}

