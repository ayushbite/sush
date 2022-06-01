// if n = 4
// then
//             *
//         *   *
//    *    *   *
// *  *    *   *
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 4;
    int row = 1;
    while (row <= n)
    {

        int spaces = n - row;
        while (spaces--)
        {
            cout << " ";
        }
        int col = 1;
        while (col <= row)
        {
            cout << "*";
            col++;
        }
        cout << endl;
        row++;
    }

    return 0;
}