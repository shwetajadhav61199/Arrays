//2. Write a program to reverse a string using recursive functions

#include<stdio.h>
#include<string.h>

int reverse(char [] , int);
int main()
{
	char str[20];
	int length;
	printf("\nEnter a String : ");
	scanf("%[^\n]s",str);
	
	printf("\n");
	
	length=strlen(str);
	reverse(str,length);	
}
int reverse(char ch[],int n)
{
	//char ch[n];
	printf("\nReverse of your String is : ");
	while(n>=0)
	{
		printf("%c",ch[n]);
		n--;
	}
	printf("\n\n");
}
