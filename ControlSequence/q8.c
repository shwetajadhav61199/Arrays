//Write a program to find whether the given number is palindrome or not.Palindrome is a number that remains the same when its digits are reversed. Example 16461
#include<stdio.h>
int main()
{
	int n,r,sum=0,temp;
	printf("\nEnter the Number:");
	scanf("%d",&n);
	
	temp=n;
	while(n>0)
	{
		r=n%10;
		sum=(sum*10)+r;
		n=n/10;
	}
	if(temp==sum)
	{
		printf("\nGiven Number is Palindrome!\n");
	}
	else
	{
		printf("\nNot a Palindrome!\n");
	}
}
