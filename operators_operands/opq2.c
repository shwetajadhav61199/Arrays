//Develop a C Program to add two Operands and store the results in one operand using addition assignment operator
#include<stdio.h>
int main()
{
	int num1,num2;

	printf("\nEnter Two Numbers:");
	scanf("%d %d",&num1,&num2);
 
 	num1=num1+num2;

	printf("\nAddition of Two Operands is:%d",num1);
	return 0;
}
