//Write a program to find the sum of digits of a given number.
#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("\nEnter a Number:");
	scanf("%d",&n);
	
	for(i=0;i<=n;i++)
	{
		sum=sum+i;
		
	}
	i++;
	printf("\nSum of all digits till %d is:%d",n,sum);
}
