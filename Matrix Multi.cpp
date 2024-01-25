//Matrix Multiplication:
//Implement matrix multiplication using a two-dimensional array.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int mat_A[10][10],mat_B[10][10],mat_mul[10][10];
    int row1,row2,col1,col2,i,j,k,ans=0;
    cout<<"Enter row and col for A matrix: ";
    cin>>row1>>col1;
    cout<<"Enter row and col for B matrix: ";
    cin>>row2>>col2;
    while(col1!=row2)
    {
        cout<<"Error!!!"<<endl;
        cout<<"Enter row and col for A matrix: ";
        cout<<endl;
        cin>>row1>>col1;
        cout<<endl;
        cout<<"Enter row and col for B matrix: ";
        cin>>row2>>col2;
    }

    cout<<endl<<endl;
    //getting input of A matrix
    cout<<"Enter A matrix :"<<endl;

    for (i=0; i<row1; i++)
    {
        for(j=0; j<col1; j++)
        {

            cin>>mat_A[i][j];
        }

    }

    // getting input B matrix

    cout<<"Enter B matrix : "<<endl;


    for (i=0; i<row2; i++)
    {
        for(j=0; j<col2; j++)
        {
            cin>>mat_B[i][j];
        }
    }

    // display output A matrix
    cout<<endl;
    cout<<"A = ";
    for (i=0; i<row1; i++)
    {
        printf("\t");

        for(j=0; j<col1; j++)
        {
            cout<<mat_A[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;
    // display output B matrix
    cout<<"B = ";
    for (i=0; i<row2; i++)
    {
        printf("\t");
        for(j=0; j<col2; j++)
            cout<<mat_B[i][j]<<" ";
        cout<<endl;
    }
    cout<<endl;

    ///multiplying A & B matrix

    for(i=0; i<row1; i++)
    {
        for(j=0; j<col2; j++)
        {
            for(k=0; k<col1; k++)
                ans=ans+mat_A[i][k]*mat_B[k][j];
            mat_mul[i][j]=ans;
            ans=0;
        }
    }

    // display output Multiplying mat_mul matrix
    cout<<endl;
    cout<<"Ans = ";
    for (i=0; i<row1; i++)
    {
        printf("\t");

        for(j=0; j<col2; j++)
        {
            cout<<mat_mul[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
