
///problem 2
//Rotate Array:
//Rotate an array of n elements to the right by k steps.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[100],i,n,f=0;
    cout<<"Enter Array Size: ";
    cin>> n;

    cout<<"Enter array:";
    for (i=0; i<n; i++)
    {
        cin>> arr[i] ;
    }

    //Before rotate

    cout<<"Orginal Array:";
    for (i=0; i<n; i++)
    {
        cout<< arr[i] <<" ";
    }
    cout<<endl;

    //After rotate

    cout<<"Rotate Array:";
    for (i=n-1; i>=0; i--)
    {
        cout<< arr[i] <<" " ;
    }

    return 0;
}


