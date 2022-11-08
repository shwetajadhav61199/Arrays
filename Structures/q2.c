//Define structure with two members (one int and other char). Also define s union with two members (one int and other char). Print the sizes of structure and union in number of bytes.

#include<stdio.h>
struct str
{
	int a;
	char b;
}str1;

union un
{
	int a;
	char b;
}un1;
int main()
{
	printf("\nSize of Structure is : %d\n",sizeof(str1));//Size of Structure in Bytes is 8
	
	printf("\nSize of Union is : %d\n",sizeof(un1));//Size of Union in Bytes is 4
	
	printf("\n");
}
