/*A C program contains the following declaration
float table[2][3] = {{1.1,1.2,1.3},{2.1,2.2,2.3}};
● What is the meaning of a table?
● What is the meaning of (table+1)?
● What is the meaning of *(table+1)?
● What is the meaning of (*(table+1)+1)?
● What is the meaning of (*(table)+1)?
● What is the value of *(*(table+1) +1)?
● What is the value of *(*(table)+1)?
● What is the value of *(*(table+1)?
● What is the value of *(*(table) + 1)+1?*/

#include<stdio.h>
int main()
{
	float table[2][3] = {{1.1,1.2,1.3},
			     {2.1,2.2,2.3}};
	float *ptr1=&table;
	
	printf("\nValue of table              : %p",table);
	printf("\nValue of (table+1)          : %p",(table+1));
	printf("\nValue of *(table+1)         : %p",*(table[1]));
	printf("\nValue of (*(table+1)+1)     : %p",(*(table+1)+1));
	printf("\nValue of (*(table)+1)       : %p",(*(table)+1));
	printf("\nValue of *(*(table+1) +1)   : %0.1f",*(*(table+1)+1));
	printf("\nValue of  *(*(table)+1)     : %0.1f", *(*(table)+1));
	printf("\nValue of *(*(table+1)       : %0.1f",*(*(table+1)));
	printf("\nValue of  *(*(table) + 1)+1 : %0.1f\n\n", *(*(table)+1)+1);
}
