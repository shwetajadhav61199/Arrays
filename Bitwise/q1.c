//1. Write a program to count the number of bits as “1” in an 8 bit number.
#include<stdio.h>
int main()
{
	int a,b;
	printf("\nEnter a Digit:");
	scanf("%d",&a);
	
	for(b=0;a!=0;a>>=1)
	{
		if(a & 1)
		b++;
	}
	
	printf("\nNumber of 1's : %d\n",b);
}
























