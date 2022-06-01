// n = 3
// A 
// B B
// C C C

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n = 3;
    int row= 1;
    
    while (row<=n)
    {
        char ch ='A';
        int col = 1;
        while (col<=row)
        {
            cout<< char(ch + row -1)<<" ";
            col++;
        }
        cout<<"\n";
        row++;
        
    }
    
    
    
    return 0;
}