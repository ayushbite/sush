#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n = 10;
    int a =0;
    int b =1;
    cout<<a<<" "<<b<<" ";
    for(int i = 2;i<n;i++){
        int nextfibnumber = a+b;
        cout<<nextfibnumber<<"  ";
        a = b;
        b = nextfibnumber;

    }
    
    return 0;
}