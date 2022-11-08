//1. Write a program to convert lower case string to upper case string and vice versa.

#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char s1[20],s2[20];
	
	//STRING CONVERSION TO LOWERCASE
	printf("\nEnter a String to convert it into Lowercase :");
	scanf("%[^\n]s",s1);
	
	for(i=0;s1[i]!='\0';i++)
	{
		if(s1[i]>='A' && s1[i]<='Z')
		{
			s1[i]=s1[i]+32;//Character Range Difference from z-Z is 32
		}
	}
	printf("\nLowercase String is : %s\n",s1);
	
	//STRING CONVERSION TO UPPERCASE
	printf("\nEnter a String to convert it into Uppercase :");
	scanf("%[^\n]s",s2);
	
	for(i=0;s2[i]!='\0';i++)
	{
		if(s2[i]>='a' && s2[i]<='z')
		{
			s2[i]=s2[i]-32;//Character Range Difference from a-A is 32
		}
	}
	printf("\nUppercase String is : %s\n\n",s2);
}
