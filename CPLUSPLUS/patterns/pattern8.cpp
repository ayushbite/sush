// n = 3
// A A A
// B B B
// C C C

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n = 4;
    int row= 1;
    char ch ='A';
    while (row<=n)
    {
        
        int col = 1;
        while (col<=n)
        {
            cout<< char(ch + row -1)<<" ";
            col++;
        }
        cout<<"\n";
        row++;
        
    }
    
    
    
    return 0;
}