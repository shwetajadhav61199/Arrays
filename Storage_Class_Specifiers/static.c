//3. Write a program to demonstrate the difference between static vs extern.

#include<stdio.h>
void Display();
extern int a; //From extern File

void main()
{
	Display();
	Display();
}

void Display()
{
	static int x;
	x=a+10; //'a' From extern File
	printf("\nx=%d\n",x);
}
