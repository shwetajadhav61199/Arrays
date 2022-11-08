//Write a menu driven C program to perform operations on Complex numbers. Use enumeration data type to identify the different operations on Complex numbers.

#include<stdio.h>
struct Complex
{
	int img;
	int real;
};
int main()
{
	struct Complex a,b,c;
	int choice;
	printf("\nEnter First Number :");
	scanf("%d %d",&a.real,&a.img);
	printf("\nEnter second Number :");
	scanf("%d %d",&b.real,&b.img);
	printf("\n1.Addition\n2.Subtraction");
	
	printf("\nEnter Your Choice:");
	scanf("%d",&choice);
	
	switch(choice)
	{

		case 1:c.real=a.real+b.real;
		       c.img=a.img+b.img;
		       
		       printf("\nSum is : %d+%di",c.real,c.img);
		       break;
		       
		case 2:c.real=a.real-b.real;
		       c.img=a.img-b.img;

		       printf("\nSubtraction is : %d-%di",c.real,c.img);
		       break;
	}
}
