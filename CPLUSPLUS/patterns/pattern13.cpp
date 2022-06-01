// if n = 4
// then 
// D
// C D
// B C D
// A B C D


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n = 4;
    int row= 1;
    
    
    while (row<=n)
    {
        char ch ='A';
        int col = 1;
        while (col<=row)
        {
            cout<< char(ch +n-row)<<" ";
            ch++;
            col++;
        }
        cout<<"\n";
        row++;
        
    }
    
    
    
    return 0;
}