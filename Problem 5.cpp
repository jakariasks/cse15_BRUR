///Problem 5
//Pascal's Triangle:
//Given a non-negative integer numRows, generate the first numRows of Pascal's triangle.
#include<bits/stdc++.h>
using namespace std;

int main()
{   int N;
    cout<<"Enter Row Number:";
    cin>> N;

    int row=1;
    while(row<=N)
    {
    int ans=1;
    cout<<ans<<" ";

    for(int i=1; i<row; i++)
    {
        ans=ans*(row-i);
        ans=ans/i;

        cout<<ans<<" ";

    }
    cout<<endl;
    row++;
    }
    return 0;
}
