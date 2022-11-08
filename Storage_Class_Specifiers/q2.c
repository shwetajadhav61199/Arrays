//2. Write a program to demonstrate the difference between static vs auto.
#include<stdio.h>
//void display();
void main()
{
	
	/*display();
	display();*/
	
	auto int x=20;
	{
		static int x=10;
		printf("\nX : %d\t\n",x);
	}
	//printf("\nX : %d\t\n",x);//Output 20 10
}
	/*void display()
	{
		static int a;
		a=a+10;
		printf("\nA : %d\t\n",a);//Output : 10 20
	}*/
