//String Length:
//Write a function to find the length of a string without using the standard library function strlen().
#include<bits/stdc++.h>
#include<string>
using namespace std;

int strlength(string str)
{
    ///without using standered function

    int i=0,len = 0;
    while(str[i]!='\0')
    {
        len++;
        i++;
    }
    return len;
}
int main()
{
    string str;
    //getting input string
    cout<<"Enter Your String: ";
    //cin>>str;
    getline (cin, str);

    cout<<endl<<str<<endl;

    ///string length with length() library function
    //int len=str.size();
    //int len=str.length();         //in c _ strlen(str)

    int len= strlength(str);

    cout<<endl<<"String size : "<<len<<endl;

    return 0;
}
