// if n = 3
// print counting untill n
// 1 2 3
// 4 5 6
// 7 8 9
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 3;
    int i = 1;
    int count = 1;

    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << count << " ";
            count++;
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}