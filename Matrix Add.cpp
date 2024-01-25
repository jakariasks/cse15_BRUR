//Matrix Addition:
//Write a program to add two matrices using a two-dimensional array.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row,col;
    int mat_A[10][10],mat_B[10][10],mat_sum[10][10],i,j;

   cout<<"Enter size of row and column : ";
    cin>>row>>col;


    //getting input of A matrix
    cout<<"Enter A matrix :"<<endl;

    for (i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {

            cin>>mat_A[i][j];
        }

    }

    // getting input B matrix

     cout<<"Enter B matrix : "<<endl;


     for (i=0; i<row; i++)
     {
         for(j=0; j<col; j++)
         {
             cin>>mat_B[i][j];
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

    cout<<endl;
    // display output B matrix
     cout<<"B = ";
     for (i=0; i<row; i++)
     {
         printf("\t");
         for(j=0; j<col; j++)
             cout<<mat_B[i][j]<<" ";
         cout<<endl;
     }
cout<<endl;
     // sum of A and B matrix
     cout<<"Sum Of A And B Matrix : "<<endl<<endl;


     for(i=0; i<row; i++)
     {
         for(j=0; j<col; j++)
         {
             mat_sum[i][j]=mat_A[i][j]+mat_B[i][j];
         }

     }

     // display output sum of matrix Sum of A & B matrix
     cout<<"sum= ";
     for (i=0; i<row; i++)
     {
         printf("\t");
         for(j=0; j<col; j++)
             cout<< mat_sum[i][j]<<" ";
         cout<<endl;
     }
    return 0;
}

