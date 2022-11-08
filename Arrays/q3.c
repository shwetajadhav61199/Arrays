//Write a program that reads a number that says how many ​ integer numbers are to be stored in an array, creates an array to fit the exact size of the data and then reads in that many numbers into the array.

#include<stdio.h>
int main()
{
	int a[10]={10,20,30,40,50,1,2,3,4,5};
	int i,n;
	printf("\nArray Elements :");
	for(i=0;i<=9;i++)
	{
	printf("%d ",a[i]);
	}
	printf("\n");
	
	int length=(sizeof(a)/sizeof(a[0]));
	
	printf("\nLength is : %d\n",length);
	int arr[length];
	
	printf("\nEnter an Array Elements :");
	for(i=0;i<length;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("\nArray Elements are : ");
	for(i=0;i<length;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	return 0;
}
