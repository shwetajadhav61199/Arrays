//4. Write a program to demonstrate the difference between auto vs register.

#include<stdio.h>
int main()
{
	int a;//Auto Variable
	register int x=10;
	{
		register int x;
		printf("Value of a : %d\n",a);//Prints Default Garbage Value
		printf("Value of x : %d\n",x);//Prints Default Garbage Value
	}
	printf("%d\n",x);//Prints X=10
}
