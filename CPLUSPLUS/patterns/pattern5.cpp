// if n = 4
// then
// 1
// 2 2
// 3 3 3
// 4 4 4 4
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 4;
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col<= row){
            cout<< row<< " ";
            col++;
        }
        cout<<"\n";
        row++;
    }

    return 0;
}