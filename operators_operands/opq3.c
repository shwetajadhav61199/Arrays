//Write a C Program to find maximum of two numbers using conditional operator
#include<stdio.h>
int main()
{
	int a,b;
	printf("\nEnter 1st Number:");
	scanf("%d",&a);

	printf("\nEnter 2nd Number:");
	scanf("%d",&b);
	
	if(a>b)
	{
		printf("\n%d is Maximum Number!\n",a);
	}
	else 
	{
		printf("\n%d is Maximum!\n",b);
	}
	return 0;
}
