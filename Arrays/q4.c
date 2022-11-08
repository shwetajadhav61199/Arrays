//4. Program to print array in reverse order

#include<stdio.h>
int main()
{
	int arr[]={19,89,32,56,76};
	int i;
	
	//ORIGNAL ORDER
	printf("\nOriginal Order is:");
	for(i=0;i<=5;i++)
	{
		printf("%d  ",arr[i]);
	}

	//REVERSE ORDER	
	printf("\nReverse Order is:");
	for(i=5;i>=0;i--)
	{
		printf("%d  ",arr[i]);
	}	
}	
