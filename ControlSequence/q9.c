//Write a menu based C Program to perform Operation(+,*,-) on matrices.
#include<stdio.h>
int main()
{
	int a[2][2],b[2][2],c[2][2],i,j,k,d[2][2],s[2][2];
	int choice;
	//ENTERING 1ST MATRIX
	printf("\nEnter 1st Matrix Elements:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	//ENTERING 2ND MATRIX
	printf("\nEnter 2nd Matrix Elements:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	//1ST MATRIX ELEMENTS
	printf("\n1st Matrix Elements:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	//2ND MATRIX ELEMENTS
	printf("\n2nd Matrix Elements:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}  

	printf("\n1.Addition\n2.Subtraction\n3.Multiplication\n");
	
	printf("\nEnter Your Choice:");
	scanf("%d",&choice);
	switch(choice){
	case 1:
	for(i=0;i<2;i++)
	//ADDITION
	{
		for(j=0;j<2;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			
		}
	}
	
	printf("Addition of two matrices is:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			
		printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	break;
	
	case 2:
	//SUBTRACTION
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			s[i][j]=a[i][j]-b[i][j];
		}
	}
	
	printf("\nSubtraction of two matrices:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",s[i][j]);
		}
		printf("\n");
	}
	break;
	
	case 3:
	//MULTIPLICATION
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			d[i][j]=0;
			for(k=0;k<2;k++)
			{
				d[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	printf("\nMultiplication of two Matrices\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			
			printf("%d\t",d[i][j]);
				
		}
		printf("\n");
	}	
	break;
	
	default:printf("Invalid Choice..!");
	}
}
