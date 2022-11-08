//Write a program to demonstrate difference between global variables vs local variables and in which section they are stored.

#include<stdio.h>
int x=10;//Global Variable
void Display();
int main()
{
	int y=20;//Local Variable to main() Function.
	Display();
	int a=10;//Local Variable to main() Function.
	printf("\nInside Block : %d",a);
	printf("\nInside Block : %d\n",++a);
	return 0;
}
void Display()
{
	int a=33;//Local Variable to Display() Function.
	printf("\nInside Function : %d",a);
}
