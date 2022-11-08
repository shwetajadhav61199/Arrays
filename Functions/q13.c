//Write a program to add the first seven terms of the following series: 1 / 1! + 2 / 2! –3 /3! + 4 / 4! . . .

#include<stdio.h>
int fact(int n)
{
	if(n==0)
	{
		return 1;
	}
	else
	{
		return n*fact(n-1);
	}
}
int main()
{
	float sum=(1/(float)fact(1))+(2/(float)fact(2))-(3/(float)fact(3))+(4/(float)fact(4))-(5/(float)fact(5))+(6/(float)fact(6))-(7/(float)fact(7));
	
	printf("\nAddition of 1st 7 terms is : %f\n",sum);
	return 0;
}
