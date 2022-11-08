//7. Write a Program to implement ​ strtok ​ library function.

#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	printf("\nEnter a String:");
	scanf("%s",str);
	
	char *token=strtok(str," ");
	printf("\n%s\n",token);
	printf("\n");
	return 0;
}
