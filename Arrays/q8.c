//8. Program to insert an element in a Specified Position in given array.

#include<stdio.h>
int main()
{
	int pos,elem,arr[100],i,n;
	
	//ACCEPTING ARRAY ELEMENTS
	printf("\nEnter Size of the Array : ");
	scanf("%d",&n);
	
	printf("\nEnter Array Elements : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("\nEnter a Position where you want to insert an Element : ");
	scanf("%d",&pos);
	
	printf("\nEnter an Element to Insert : ");
	scanf("%d",&elem);
	
	//POSITION TO INSERT ELEMENT
	for(i=n-1;i<=pos;i++)
	{
		arr[i+1]=arr[i];
	}
	
	//INSERTING ELEMENT
	printf("\nAfter Insertion of Element in a Specified Position : ");
	arr[pos]=elem;
	for(i=0;i<=n-1;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n\n");
}
