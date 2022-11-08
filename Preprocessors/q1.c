//Write a C program to calculate factorial of a number. Factorial function has to be written as a multiline macro.

#include<stdio.h>
#define FACT(n)\
for(i=1;i<=n;i++)\
f=f*i;\
printf("\nFactorial of %d is : %d\n\n",n,f);

int main()
{
	int n,i,f=1;
	printf("\nEnter a Number:");
	scanf("%d",&n);
	FACT(n);
	return 0;
}
