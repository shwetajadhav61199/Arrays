//9. Program to delete the specified Integer from an array.

#include<stdio.h>
int main()
{
	int a[10],i,j,index,key;
	
	//ACCEPTING ELEMENTS
	printf("\nEnter Number:");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	
	//REMOVING SPECIFIED ELEMENT
	printf("\nEnter an Element to Remove from List:");
	scanf("%d",&key);
	index=9;
	
	for(i=0;i<=index;i++)
	{
		if(a[i]==key)
		{
			for(j=i+1;j<=index;j++)
				a[j-1]=a[j];
				i--;
				index--;
		}
	}
	
	//ARRAY AFTER REMOVING SPECIFIED ELEMENT
	printf("\nArray after Removing %d is:",key);
	for(i=0;i<=index;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}
