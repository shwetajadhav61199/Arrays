//Develop a program to calculate nPr and nCr given n and r.

#include<stdio.h>
long factorial(int);
long find_ncr(int,int);
long find_npr(int,int);
int main()
{
	int n,r;
	int ncr,npr;
	printf("\nEnter value of n and r : ");
	scanf("%d %d",&n,&r);
	
	ncr=find_ncr(n,r);
	npr=find_npr(n,r);
	
	printf("\n%dC%d = %d ",n,r,ncr);
	printf("\n%dP%d = %d \n",n,r,npr);
	
	return 0;
}
	long find_ncr(int n,int r)
	{
		return factorial(n)/(factorial(r)*factorial(n-r)); //Formula = (n!)/(n-r)!
	}
	
	long find_npr(int n,int r)
	{
		return factorial(n)/factorial(n-r); //Formula = (n!)/((n-r)!*(r!))
	}
	
	long factorial(int n)
	{
		int i;
		int result = 1;
	for(i=1;i<=n;i++)
	{
		result = result*i;	
	}
	return result;
	}
