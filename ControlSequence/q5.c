//5. Develop a C program to find the sum of all odd numbers upto N using a while loop.

#include<stdio.h>
int main()
{
	int sum=0,n,i=1;
	printf("\nEnter a Number:");
	scanf("%d",&n);
	while(i<=n)
	{
		if(i%2!=0)//CHECK IF NUMBER IS EVEN OR ODD
		{
			sum+=i;//ADDITION OF ALL ODD NUMBERS
		}
		i++;
	}
	printf("\nSum of Odd Numbers upto %d is:%d\n",n,sum);
}
