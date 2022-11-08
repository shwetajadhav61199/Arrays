//7. Write a program to embed assembly language code in C program.

#include<stdio.h>
void main()
{
	int a=10,b=20,c;
	asm
	{
		mov ax,a;
		mov bx,a
		add ax,bx
		mov c,ax
	}	
	printf("Addition is : %d\n",c);
}
