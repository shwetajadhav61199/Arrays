//Write a C program to generate two Relatively Prime numbers. Two integers are relatively prime (or coprime) if there is no integer greater than one that divides them both (that is, their greatest common divisor is one). For example, 12 and 13 are relatively prime, but 12 and 14 are not.

#include<stdio.h>
int main()
{
	int n1,n2,hcf,i;
	printf("\nEnter 1st Number:");
	scanf("%d",&n1);
	
	printf("\nEnter 1st Number:");
	scanf("%d",&n2);
	
	for(i=1;i<=n1;i++)
	
	if(n1%i==0 && n2%i==0)
	{
		hcf=i;
	}
	if(hcf==1)
	{
		printf("\n%d and %d are Two Relatively Co-Primes!\n",n1,n2);
	}
	else
	{
		printf("\n%d and %d are not Relatively Co-Primes!\n\n",n1,n2);
	}
}	
