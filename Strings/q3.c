//Write a program to read n number of strings using a two-dimensional character array, sort them and display the sorted list of strings on the screen.

#include<stdio.h>
int main()
{
	int a[2][2],n,i,j;
	printf("\nEnter Array Size:");
	scanf("%d",&n);
	
	printf("\nEnter Array Elements:");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a);
		}
	}
	printf("\nArray Elements are : %d  ",a[i][j]);
}
