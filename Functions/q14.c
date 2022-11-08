//14. Write a program to compute factorial and GCD using recursion.

#include<stdio.h>
int gcd(int,int);//Function Declaration of GCD.
int fun(int);//Function Declaration of Factorial.
int main()
{
	int n,num1,num2,gcd_num;
	
	//Factorial
	printf("\nEnter a Number to Find a Factorial : ");
	scanf("%d",&n);
	printf("\nFactorial of %d is : %d\n",n,fun(n));//Func Call to Factorial()
	
	//GCD
	printf("\nEnter any Two Positive Numbers : ");
	scanf("%d %d",&num1,&num2);
	printf("\nGCD of %d and %d is : %d\n\n",num1,num2,gcd(num1,num2));//Func Call to gcd()
}

	int gcd(int num1,int num2) //Function Definition of GCD.
	{
		if(num1==0)
		{
			return num2;
		}
		else if(num2==0)
		{
			return num1;
		}
		else if(num1!=0 || num2!=0)
		{
			return gcd(num2,num1%num2); //GCD Using Recursion.
		}
		return 0;
	}
	
	int fun(int n) //Function Definition of Factorial.
	{
		if(n==0 || n==1)
		{
			return 1;
		}
		else
		{
			return n*fun(n-1); //Factorial Using Recursion.
		}
	}
