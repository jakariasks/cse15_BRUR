
///problem 2
//Rotate Array:
//Rotate an array of n elements to the right by k steps.

#include<bits/stdc++.h>
using namespace std;
int main()
{


    int a[100],n,k;
    cout<<"Enter Array Size: ";
    cin>>n;

    cout<<endl<<"Enter k step: ";
    cin>>k;

    cout<<endl<<"Enter Your Array: ";
    for(int i=0; i<n; i++)
    {
        cin>> a[i];
    }

    k=k%n;

    for(int i=0; i<n; i++)
    {
        if(i<k)
            cout<<(a[n+i-k])<<" ";
        else
            cout<<(a[i-k])<<" ";
    }
    cout<<endl<<endl;

    return 0 ;
}
