// if n = 4
// then 
// 1 
// 2 3
// 4 5 6
// 7 8 9 10
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n = 4;
    int row = 1;
    int count = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= row){
            cout<< count << " ";
            count++;
            col++;
        }
        cout<<"\n";
        row++;
    }
    
    
    
    return 0;
}