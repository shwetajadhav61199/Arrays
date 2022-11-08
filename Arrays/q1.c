//Write a program to read your name into a character array. Print the name along with the length of your name and sizeof the array in which name is stored.
#include<stdio.h>
#include<string.h>
int main()
{
	char arr[50];
	int i;
	int length=sizeof(arr);
	
	printf("\nEnter your Name : ");
	scanf("%[^\n]s",arr);
	
	printf("\nYour Name is : %s\n",arr);
	
	printf("\nSize of the Array is : %d\n",length);
	
	for(i=1;arr[i]!='\0';i++);
	
	printf("\nLength of Your Name is : %d\n",i);
}
