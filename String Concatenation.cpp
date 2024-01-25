//String Concatenation:
//Implement a function to concatenate two strings without using the standard library funtion

#include<bits/stdc++.h>
using namespace std;

void strconcat(char str1[],char str2[])
{
    ///without using library function
    int i=0,len = 0;
    while(str1[i]!='\0')
    {
        len++;
        i++;
    }
    //cout<<len<<endl;
    int j=0;
    while(str2[j]!='\0')
    {
        str1[len+j]=str2[j];
        j++;
    }
    cout<<endl<< str1<<endl;

}
int main()
{
    char str1[50];
    char str2[30];
    cout<<"Enter Your First String:";
    cin>>str1;
    cout<<"Enter Your Second String:";
    cin>>str2;

    ///using append library function to append two string
    //str1.append(str2);        //in c _ strcat(str1,str) use to append
    //str1=str1+str2;

    ///without using library function
    //calling a created function
    strconcat(str1,str2);
    return 0;
}
