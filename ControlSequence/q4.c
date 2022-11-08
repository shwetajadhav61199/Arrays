//Develop a C Program to find factorial of a Number N using for loop.
#include<stdio.h>
int main()
{
	int n,fact=1,i;
	printf("\nEnter a Number:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
		printf("\nFactorial of %d is:%d",n,fact);
	return 0;
}
