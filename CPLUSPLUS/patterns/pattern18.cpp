#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;
    int row = 1;
    while (row<=n)
    {
        //priting 1st traingle
        int col = 1;
        while (col<= (n-row+1))
        {
            cout<<col;
            col++;
        }
        //printing 2nd triangle
        int star1=row-1;
        while (star1)
        {
            cout<<"*";
            star1--;
        }
        //printing 3rd traangle
        int star2=row-1;
        while (star2)
        {
            cout<<"*";
            star2--;
        }
        //pritning 3rd traingle
        int col2  = 1;
        int count = n-row +1;
        while(col2<= n -row +1){
            cout<<count;
            count--;
            col2++;
        }

        
        cout<<endl;
        row++;
        

    }
       
    
    return 0;
}