/*10. Generate the following pyramid of numbers using nested loops
			1
		       212
		      32123
		     4321234
		    543212345*/
#include<stdio.h>
void main()
{	
	int i,j,rows=5,k;
	/*printf("Enter number to define rows:\n");
	scanf("%d",&rows);*/
	printf("\n");
	for(i=1;i<=rows;i++)
	{
		for(j=rows;j>1;j--)
		{
			if(j<=i)
				printf("%d",j);
			else
				printf(" ");
		}
		for(j=1;j<=rows;j++)
		{
			if(j<=i)
				printf("%d",j);
			else
				printf(" ");
		}
		printf("\n");
	}
}
