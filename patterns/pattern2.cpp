#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 6;
    int i =1;
    while(i<=n){
        int j = n;
        while(j> 0){
            cout<<j<<" ";
            j--;
        }
        cout<<"\n";
        i++;
    }
    return 0;
}