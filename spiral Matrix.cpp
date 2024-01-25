#include<bits/stdc++.h>
using namespace std;

int main()
{
    int matrix[10][10];
    int m,n,i,j;

    cout<<"Enter Row Size: ";
    cin>> m;
    cout<< "Enter Column Size: ";
    cin>> n;

    // input matrix
    cout<< "Enter your Matrix: ";
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            cin>>matrix[i][j];
        }
    }
    cout<<endl<<endl;

    //Display Your Matrix
    cout<< "Your " <<m <<" x " <<n <<" Matrix is: "<<endl;

    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            cout<<matrix[i][j] <<" ";
        }
        cout<< endl;
    }
    cout<< endl;
    cout<< endl;


    ///Code for Spiral Matrix

    cout<< "Spiral Matrix of "<<m <<"x"<< n <<" is :"<<endl;
    int rowStart=0, rowEnd=m-1, colStart=0, colEnd=n-1;

    while(rowStart<=rowEnd && colStart<=colEnd)
    {
    for(i=colStart; i<=colEnd; i++)
    {
        cout<< matrix[rowStart][i] <<" ";
    }
    rowStart++;

    for(i=rowStart; i<=rowEnd; i++)
    {
        cout<< matrix[i][colEnd] <<" ";
    }
    colEnd--;

    if (rowStart<=rowEnd){
     for(i=colEnd; i>=colStart; i--)
     {
         cout<< matrix[rowEnd][i] << " ";
     }
    }
     rowEnd--;

     if(colStart<=colEnd)
     {
     for(i=rowEnd; i>=rowStart; i--)
     {
         cout<< matrix[i][colStart] << " ";
     }
     }
     colStart++;
    }

    cout<<endl <<endl;
    return 0;
}
