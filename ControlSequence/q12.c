//Write a Program to print all the Prime Numbers in the 1st N Elements.
#include<stdio.h>
int main()
{
	int i,n,cnt=0,j;
	
	printf("\nEnter a Number:");
	scanf("%d",&n);

	for(i=2;i<=n;i++)
	{
			cnt=0;
			for(j=1;j<=i;j++)
			{
				if(i%j==0)
				{
			  		cnt++;
				}
                	}
			if(cnt==2)
			{
				printf("%d\n",i);
			}
	}
	return 0;
}
