//Write a function to swap contents of two variables using functions and pointer variables.
#include<stdio.h>
int swap(int *,int *);
int main()
{
	int x=10;
	int y=20;
	printf("\nValues of x & y before Swapping are : %d %d Respectively!\n",x,y);
	swap(&x,&y);
	return 0;
}

int swap(int *ptr1,int *ptr2)
{
	*ptr1=*ptr1+*ptr2;
	*ptr2=*ptr1-*ptr2;
	*ptr1=*ptr1-*ptr2;
	 printf("\nValues of x & y after Swapping are : %d %d Respectively!\n",*ptr1,*ptr2);
}
