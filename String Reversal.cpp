//String Reversal:
//Create a program to reverse a given string.

#include<bits/stdc++.h>
using namespace std;

void stringrev(string str)
{
    ///without using library function

    int i=0,len=0;
    while(str[i]!='\0')
    {
        len++;
        i++;
    }

    for(int i=len-1; i>=0; i--)
    {
        cout<<str[i];
    }
}
int main()
{
    string str;
    cout<<"Enter Your String: ";
    //cin>>str;
    getline(cin,str);  // to get input whole line in cpp

    //calling a created function
    stringrev(str);

    return 0;

}
