//Write a recursive function to find the factorial of a number.
#include<stdio.h>
int main()
{
	int n;
	printf("\nEnter a Number:");
	scanf("%d",&n);
	
	printf("\nFactorial of %d is:%d",n,fun(n));
}
int fun(int n)
{
	if(n==0)
	{
		return 1;//Factorial of 0 & 1 is 1
	}
	else
	{
		return n*fun(n-1);//Factorial
	}
}
