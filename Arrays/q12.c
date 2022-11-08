//12. Program to find the Largest number in an array of numbers using recursion.

#include<stdio.h>
int large(int []);
int n;
int main()
{
	int a[100],max,i;
	
	printf("\nEnter Array Size:");
	scanf("%d",&n);
	
	printf("\nEnter Array Elements:");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	max=arr[0];
	for(i=1;i<=n;i++)
	{
		if(max<arr[i])
		{
			max=arr[i];
		}
	}
	
	max=large(a);
	printf("\nLargest Number of Array is : %d\n",max);
	return 0;
}
	/*int large(int a[])
	{
		int i=0,max=0;
		
		if(i<n)
		{
			if(max<a[i])
			{
				max=a[i];
			}
		i++;
		large(a);
		}
	return a[i];
	}*/
