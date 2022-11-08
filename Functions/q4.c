//Write a C program with a function rotoate_right (n, b). This function rotates integer n towards right by b positions.
#include<stdio.h>
#define INT_BITS_32

int rotate_right(int n,int b)
{
	return (n>>b);
}

int main()
{
	int n,b;
	printf("\nEnter n (number to be shift) : ");
	scanf("%d",&n);
	
	printf("\nEnter b (how many time it should be shiffted) : ");
	scanf("%d",&b);
	
	
	printf("\nRight Rotation of %d by %d is : %d\n\n",n,b,rotate_right(n,b));
	return 0;
}
