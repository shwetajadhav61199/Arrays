//Program to find the largest, smallest, second largest and second smallest element of an array.       
#include<stdio.h>
int main()
{
	int i,arr[10]={1,2,3,4,5,6,7,8,9,0},max,min smax,smin;
	
	//LARGEST ELEMENT
	max=arr[0];	
	for(i=0;i<10;i++)
	{
		if(max<arr[i])
		{
			max=arr[i];
		}
	}
	printf("\nLargest Element is:%d\n",max);
	
	//SAMLLEST ELEMENT
	min=arr[0];
	for(i=0;i<10;i++)
	{
		if(min>arr[i])
		{
			min=arr[i];
		}
	}
	printf("\nSmallest Element is:%d\n",min);
	
	//SECOND LARGEST ELEMENT
	smax=arr[0];	
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			if(smax<arr[i])
			{
				smax=arr[i];
			}
		}
	}
	printf("\nLargest Element is:%d\n",smax);
	
	//SECOND SMALLEST ELEMENT
	smin=arr[0];
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			if(smin<arr[i])
			{
				smin=arr[i];
			}
		}
	}
	printf("\nLargest Element is:%d\n",smin);	
}
