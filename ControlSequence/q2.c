/*Develop a C Program which accepts character type data items from user. In case if user types-
A or a it should display "A for Apple"
B or b it should display "B for Bat"
D or d it should display "D for Dog"
F or f it should display "F for Fan"*/

#include<stdio.h>
int main()
{
	char ch,choice,n;
	
	printf("\nChoices You Have :\n");
	printf("A:\nB:\nC:\nD:\nF:\na:\nb:\nc:\nd:\nf:\n");
	
	printf("\nEnter Your Choice:");
	scanf("%c",&n);
	
	if(n>=65 && n<=122) //Ascii Values of Alphabets
	{
		switch(n)
		{
			case 'A' : printf("\nA for Apple!\n");
			           break;
	
			case 'a' : printf("\na for Apple!\n");
			      	   break;

			case 'B': printf("\nB for Bat\n");
			          break;

			case 'b': printf("\nb for Bat\n");
			          break;

			case 'C': printf("\nC for Cat\n");
			          break;

			case 'c': printf("\nc for Cat\n");
			          break;
			
			case 'D': printf("\nD for Dog\n");
			          break;
			          
			case 'd': printf("\nd for Dog\n");
			          break;
			          
			case 'F': printf("\nF for Fan\n");
				  break;
				  
			case 'f': printf("\nf for Fan\n");
				  break;
		
			default: printf("\nCharacter is not in Range!!\n");
		}	
	}
}
