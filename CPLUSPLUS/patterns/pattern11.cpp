// n = 3
// A B C
// B C D
// C D E

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
        while (col<=n)
        {
            cout<< char(ch + row -1)<<" ";
            ch++;
            col++;
        }
        cout<<"\n";
        row++;
        
    }
    
    
    
    return 0;
}