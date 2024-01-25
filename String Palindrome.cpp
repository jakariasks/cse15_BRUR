//String Palindrome:
//Check if a given string is a palindrome or not.

#include<bits/stdc++.h>
#include<string>
using namespace std;


int main()
{
    string str;
    string strrev;
    cout<<"Enter Your String: ";
    cin>>str;

   //reverse string
   strrev=string(str.rbegin(),str.rend());

   //compare reverse string to entered string
    int result= str.compare(strrev);     //if is it equal return 0

   if(result==0)
   cout<<"Palindrome"<<endl;
   else
    cout<<endl<<"Not Palindrome"<<endl;

    return 0;

}
