//Write a C program to check what happens if we declare a variable as static in global declaration and also in local declaration.(And write down the observations as a comment part in your program).

#include<stdio.h>
static int x=10;//Static Global Variable
int main()
{
	static int x=20;//Static Local Variable
	printf("X : %d\n",x);//Output = 20
	return 0;
}
