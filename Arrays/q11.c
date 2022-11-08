//11. Program to concatenate two arrays.

#include<stdio.h>
int main()
{
	int i,a[5],b[5],c[10],n1=5,n2=5,cnt=0,m=n1+n2;
	
	//ACCEPTING ARRAY ELEMENTS
	printf("\nEnter Array 1:");
	for(i=0;i<n1;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("\nEnter Array 2:");
	for(i=0;i<n2;i++)
	{
		scanf("%d",&b[i]);
	}
	
	//CONCATINATION OF TWO ARRAYS
	printf("\nConcatination of a[%d] and b[%d] in c[%d]:",n1,n2,m);
	for(i=0;i<n1;i++)
	{
		c[cnt++]=a[i];
	}
	
	for(i=0;i<n2;i++)
	{
		c[cnt++]=b[i];
	}
	
	//PRINT CONCATINATED ARRAY
	//printf("\nConcatinated Array is:\n");
	for(i=0;i<m;i++)
	{
		printf("%d ",c[i]);
	}
	printf("\n");
	return 0;
}
