//Transpose of a Matrix
//Create a program that finds the transpose of a given matrix.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int mat_A[10][10],mat_B[10][10];
    int row,col,i,j;
    cout<<"Enter row and col for A matrix: ";
    cin>>row>>col;

    cout<<endl<<endl;
    //getting input of A matrix
    cout<<"Enter A matrix :"<<endl;

    for (i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {

            cin>>mat_A[i][j];
        }

    }


    // display output A matrix
    cout<<endl;
    cout<<"A = ";
    for (i=0; i<row; i++)
    {
        printf("\t");

        for(j=0; j<col; j++)
        {
            cout<<mat_A[i][j]<<" ";
        }
        cout<<endl;
    }

   ///transpose matrix

   for(i=0; i<row; i++)
   {
       for(j=0; j<col; j++)
       {
           mat_B[j][i]=mat_A[i][j];
       }
   }

    // display output Transpose matrix

    int temp=row;
    row=col;
    col=temp;
    cout<<endl;
    cout<<"Ans = ";
    for (i=0; i<row; i++) //row of transpose matrix is col of main matrix
    {
        printf("\t");

        for(j=0; j<col; j++) //col of transpose matrix is row of main matrix
        {
            cout<<mat_B[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}

