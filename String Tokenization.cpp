//String Tokenization:
//Implement a program to tokenize a given string based on a delimiter

#include<bits/stdc++.h>
using namespace std;
int main()
{
	char str[] = "Hello, I am Jakaria Hasan SKS";

	// Returns first token using strtok library function
	char *token = strtok(str, " ");

	// Keep printing tokens while one of the
	// delimiters present in str[].
	while (token != NULL)
	{
		cout<<token<<endl;
		token = strtok(NULL, " ");
	}

	return 0;
}
