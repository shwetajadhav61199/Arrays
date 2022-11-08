/*Write a program to count the number of ‘e’ in the following array of pointer to the string.
	char * s [ ] = {“we will teach you how to “ ;
			“Move a mountain “ ;
			“Level a building “ ;
			“Erase the past “;
			“Make a million “ ;}*/
			
#include<stdio.h>
#include<string.h>
int main()
{
	int count=0,n=0;
	int i=0;
	char *s[50] = {
		       "we will teach you how to",
		       "Move a mountain",
		       "Level a building",
		       "Erase the past",
		       "Make a million"
		      };
		      
	while(n<5) //Number of Lines are 5(n)
	{
		if(*((s[n])+i++)=='e') //Counting Number of e's from 1st String
		{
			++count;
		}
		else if(*((s[n])+i)=='\0') //String Termination after each Line
		{
			n++;
			i=0;
		}
	}
	
	printf("\nNumber of e's in String is/are : %d\n\n",count);
	return 0;
}
