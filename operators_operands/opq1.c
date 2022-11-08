//Que.1 Develop a C Program to Perform Operations [+,*,-,/ and %] on two whole numbers identify suitable Data Types to represent the number and Resultant Value.

#include<stdio.h>
int main()
{
	int num1,num2,ans,choice;
	
	printf("\nEnter Number 1:");
	scanf("%d",&num1);
	
	printf("\nEnter Number 2:");
	scanf("%d",&num2);
	
	printf("\n1.Addition \n2.Multiplication \n3.Subtraction \n4.Division \n5.Mod");
	printf("\nEnter your Choice:");
	scanf("%d",&choice);
	
	
	switch(choice)
	{
		case 1:printf("\nAddition of %d+%d=%d",num1,num2,(num1+num2));
		       break;
		      
		case 2:printf("\nMultiplication of %d*%d=%d",num1,num2,(num1*num2));
		       break;
		
		case 3:printf("\nSubtraction of %d-%d=%d",num1,num2,(num1-num2));
		       break;
		       
		case 4:printf("\nDivision of %d/%d=%d",num1,num2,(num1/num2));
		 		      
			if(num1==0||num2==0)
				printf("\nNumber cannot be 0\n");
			break;
			
		case 5:printf("\nMod of %d & %d=%d",num1,num2,(num1%num2));
			break;
			
		default:printf("\nPlease Enter Valid Choice!\n");
			break;	
	}
}	
