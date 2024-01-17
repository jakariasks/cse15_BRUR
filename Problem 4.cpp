///Problem 4
//Product of Array Except Self:
/*Given an array nums, return an array output such that
output[i] is equal to the product of all the elements of nums except*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[100],i,c=0,range,sum,pro=1, return_arr[100];

   cout<<"Enter Array Size: ";
    cin>>range;

    cout<<"Enter Array: ";
    for(i=0; i<range; i++)
    {
        cin>> arr[i];
    }

    for(int j=0; j<range; j++)
    {
        return_arr[j]=1;

       for(i=0; i<range; i++)
       {
           if (i==j)
            continue;
           return_arr[j]= (return_arr[j]*arr[i]);
       }

    }

    cout<<"Return Array: ";
     for(i=0; i<range; i++)
    {
        cout<<return_arr[i] <<" " ;
    }

    return 0;
}
