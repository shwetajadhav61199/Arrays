/*Use scanf function to read a string of characters (into character type array called text)
including alphabets, digits, blanks, tabs etc except new line character. Write a loop that will
examine each character in a character-type array and determine how many of the
characters are letters, how many are digits, how many are blanks and how many are tabs.
Assume that text contains 80 characters.*/
#include<stdio.h>
int main()
{
	int count,i,white,alpha[5];
	int digit[80];
	
	white=alpha=0;
	
	for(i=0;i<80;++i)
	alpha[i]=0;
	
	if(count>='0' && count<='79')
	{
		++alpha[count-'0'];
	}
	else if(count==' ' || count=='\t')
	{
		++white;
	}
	
	else
	{
		alpha++;	
	}
	
	printf("Digits=");
	for (i=0;i<80;++i)
	printf("%d",digit[i]);
	printf(",white space=%d,Aplhabet=%d\n",white,alpha);
}
