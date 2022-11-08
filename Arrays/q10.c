//10. Program to Put Even & Odd elements of an array in two separate arrays
#include<stdio.h>
int main()
{
	int a[10],e[10],o[10],i,j,k,n;
	
	//ENTER HOW MANY NUMBERS YOU WANT RO CHECK
	printf("Enter a Number:");
	scanf("%d",&n);
		
	//ACCEPTING ARRAY ELEMENTS
	printf("\nEnter Array Elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n");

	//CHECK NUMBER IS EVEN OR ODD
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			e[j]=a[i];
			j++;			
		}
		else
		{
			o[k]=a[i];
			k++;
		}
	}
	
	//PRINT EVEN NUMBERS
	printf("Even Numbers:");
	for(i=0;i<j;i++)
	{
 		printf("%d  ",e[i]);		
	}
	printf("\n");
	printf("\n");
	
	//PRINT ODD NUMBERS
	printf("Odd Numbers:");
	for(i=0;i<k;i++)
	{
 		printf("%d  ",o[i]);		
	}
	printf("\n");
	printf("\n");
}
