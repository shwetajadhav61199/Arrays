//Write a Program to find if a given number is Armstrong number.
//Hint: (153 = 1^3 + 5^3 + 3^3)
#include<stdio.h>
int main()
{
	int n,i,rem,res=0,num;
	printf("\nEnter a Number:");
	scanf("%d",&n);
	num=n;
	while(num!=0)
	{
			rem=num%10;
			res+=rem*rem*rem;
			num/=10;
	}
	if(res==n)
	{
		printf("\n%d is Armstrong Number\n",n);
	}
	else
	{
		printf("\n%d is Not an Armstrong Number\n",n);
	}
}
