//Search in Matrix:
//Write a program to search for a specific element in a two-dimensional array.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10][10],i,j,row,col,f=0,src;

    cout<<"Enter row and col: ";
    cin>>row>>col;

    //getting input specific element
    cout<<"Enter Searching Element: ";
    cin>>src;

    //getting input your matrix
    cout<<"Enter Your matrix: ";
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    //display matrix
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    ///searching Specific Element
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            if(arr[i][j]==src)
            {
                cout<<endl<<"YES,Found!! Your Element in position in this Matrix: "<<i+1<<", "<<j+1<<endl;
                f++;
                break;
            }
        }
    }
    if(f==0)
        cout<<"Sorry Not Found! Your Element is not Available in this Matrix!!"<<endl;
    return 0;
}
