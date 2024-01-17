///problem 3
//Two Sum:
//Given an array of integers, find two numbers such that they add up to a specific target number.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[100],i,c=0,range,sum;

    cout<<"Enter Array Size: ";
    cin>>range;

    cout<< "Enter Sum: ";
    cin>> sum;

    cout<<"Enter Array: ";
    for(i=0; i<range; i++)
    {
        cin>> arr[i];
    }
    for(i=0; i<range; i++)
    {
        cout<<  arr[i] << " " ;
    }
    for(int x=0; x<range; x++)
    {
        for(i=0; i<range; i++)
        {
            if(sum== (arr[x]+arr[i]) && x!=i)
                c++;
        }
    }

    cout<< endl<< c/2;

    return 0;

}
