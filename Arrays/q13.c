//13. Program to print all the repeated numbers with frequency in an Array.

#include<stdio.h>
int main()
{
	int n,rem,arr[100]={0};
	printf("\nEnter a Number:");
	scanf("%d",&n);
	
	while(n>0)
	{
		rem=n%10;
		if(arr[rem]==1)
		break;

		arr[rem]=1;
		n=n/10;
	}
	if(n>0)
	{
		printf("\n%d Repeated %d times\n",n,rem);
	}
	else
	{
		printf("\nNo Number is Repeated!\n");
	}
}
