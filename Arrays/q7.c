//7. Program to copy an array to another array in same order & in reverse order

#include<stdio.h>
int main()
{
	int arr[]={2,5,7,1,9,10};
	int i,n;
	
	//ORIGINAL ORDER OF ARRAY
	printf("Original Order:\n");
	for(i=0;i<6;i++)
	{
		printf("%d\n",arr[i]);
	}
	printf("\n");
	
	//REVERSE ORDER OF ARRAY
	printf("Reverse Order:\n");
	for(i=5;i>=0;i--)
	{
		printf("%d\n",arr[i]);
	}
	return 0;
}
