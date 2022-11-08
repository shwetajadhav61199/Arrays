//9. Write a function to get the transpose of a matrix.

#include<stdio.h>
int transpose(int i,int j)
{
	int A[5][5],trans;
	
	//ENTERING MATRIX ELEMENTS
	printf("\nEnter Matrix Elements:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}

	//PRINTING MATRIX ELEMENTS
	printf("\nOriginal Matrix Elements are(3*4):\n");
	printf("____________________________________\n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("   %d\t",A[i][j]);
		}
		printf("\n");
	}
	
	//TRANSPOSE OF A MATRIX
	printf("\nTranspose of a Matrix is(4*3):\n");
	printf("____________________________________\n\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("   %d   ",A[j][i]);
		}
		printf("\n");
	}	
	return 0;	
}
int main()
{
	int i,j;
	transpose(i,j);
}
