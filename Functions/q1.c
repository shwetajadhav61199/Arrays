//Write a program to calculate n!/(n-r)! using functions.

#include<stdio.h>
int factorial(int);
int division(int,int);
int main()
{
	int n,r,fact1,fact2,s,div,res;
	printf("\nEnter total number of objects(n) = ");
	scanf("%d",&n);	
	
	printf("\nEnter number of objects selected(r) = ");
	scanf("%d",&r);
	
	s=n-r;
	
	fact1=factorial(n);
	fact2=factorial(s);//s=(n-r)
	
	printf("\nFactorial of Number of Objects(n) is = %d\n",fact1);
	printf("\nFactorial of Number of Objects Selected(r) is = %d\n",fact2);
	
	res=division(fact1,fact2);//Division
	printf("\nResultant Value = %d\n",res);
	printf("\n");
}

	int factorial(int fact)
	{
		if(fact==0)//Base Condition
		{
			return 1;		
		}
		fact=fact*factorial(fact-1);//Factorial
		return fact;
	}
	
	int division(int fact1,int fact2)
	{
		return fact1/fact2;//Division
	}
