///problem 1

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

    ///output

    for(i=0; i<n; i++)
    {
        if (i+arr[0] !=arr[i])
        {
            cout<<i+arr[0] ;
            f++;
             break;
        }
    }
    if (f==0)
        cout<<"Not Missing";
    return 0;
}

