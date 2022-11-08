//5. Write a program to perform operations on complex numbers.

#include<stdio.h>
struct complex
{
	int real;
	int img;
};
int main()
{
	struct complex i,r,c;
	printf("\nEnter Real Number(i):");
	scanf("%d",&i.real);
	
	printf("\nEnter Imaginary Number(i):");
	scanf("%d",&i.img);
	
	printf("\nEnter Real Number(r):");
	scanf("%d",&r.real);

	printf("\nEnter Imaginary Number(r):");
	scanf("%d",&r.img);
	
	c.real=i.real+r.real;
	c.img=i.img+r.img;
	
	if(c.img>=0)
	{
		printf("\nSum of two Complex Numbers is : %d + %d(i)\n",c.real,c.img);
	}
	if(c.img<0)
	{
		printf("\nSubtraction of two Complex Numbers is : %d - %d(i)\n\n",c.real,c.img);
	}
	return 0;
}
