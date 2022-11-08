//4. Write a c program to print the same file on the console.

#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *fp;
	char file[100],c;
	
	printf("\nEnter the File to Open : ");
	scanf("%s",file);
	
	printf("\n");
	
	fp=fopen(file,"r");
	if(fp==NULL)
	{
		printf("\nCannot Open File!\n");
		exit(0);
	}
	c=fgetc(fp);
	while(c!=EOF)
	{
		printf("%c",c);
		c=fgetc(fp);
	}
	printf("\n");
	fclose(fp);
	return 0;
}
