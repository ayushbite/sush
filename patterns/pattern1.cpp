// n = 4
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 4;
    int i = 1;

    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << j << " ";
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}