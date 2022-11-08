//Develop a C Program having following logic. If i is 20 or j is 20, display as "Atleast one variable is having 20" otherwise display "Both variables are not having 20". If is less than or equal to 40 and j is less than or equal to 40, It should display "Both are less than or equal to 40"

#include<stdio.h>
int main()
{
	int i,j;
	printf("\nEnter i : ");
	scanf("%d",&i);
	
	printf("\nEnter j : ");
	scanf("%d",&j);
	
	if(i==20 || j==20)
	{
		printf("\nAtleast one variable is having 20!\n");
	}
	else
	{
		printf("\nBoth Variables are not having 20!\n");
	}
	if(i<=40 && j<=40)
	{
		printf("\nAtleast one Variable is less than or equal to 40!\n");
	}
	else
	{
		printf("\nBoth are not less than or equal to 40!\n");
	}
}
