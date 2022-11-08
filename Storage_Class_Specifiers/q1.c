/*Develop multi file program to understand static, auto, register, global, static global variables.What is the scope and lifetime of each of these types of variables.*/

#include<stdio.h>
int x=10; //Extern Storage Class
int main()
{
	static int a;
	int b;
	printf("a : %d\n",a);//Static Default Value is 0
	printf("b : %d\n",b);//Auto By Default
	printf("x : %d\n",x);//Global Variable
	register int y;
	printf("y : %d\n",y);//By Default Garbage Value
}
