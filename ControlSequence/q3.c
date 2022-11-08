//Develop a C Program which adds all numbers from 1 to N, except those which are divisible by 5. Implement this using for loop and continue statement.
#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("\nEnter How many numbers you want to Add:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		if(i%5!=0)
		{
			
			sum=sum+i;
			
		}
		continue;
	}
	printf("\nAddition of numbers till %d is:%d\n",n,sum);
}		
