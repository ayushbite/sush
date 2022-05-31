// if n = 4
// then
// here the column is dependent upon its curresponding row number
// 1
// 2 3
// 3 4 5
// 4 5 6 7
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
        int count = row; // printing count is dependent upon its curresponding row number
        while (col <= row)
        {
            cout << count << " ";
            count++;
            col++;
        }
        cout << "\n";
        row++;
    }

    return 0;
}