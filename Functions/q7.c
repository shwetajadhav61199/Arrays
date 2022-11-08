//Write a C program with a function ​ tolower, which converts upper case letters to lower case. Use conditional expression.

#include<stdio.h>
#include<ctype.h>
int main()
{
	char str,low;
	printf("\nEnter a String:");
	scanf("%c",&str);
	
	//low=str+32;
	
	printf("\nAfter Converting String to Lowercase : %c\n",tolower(str));
	return 0;
}	
