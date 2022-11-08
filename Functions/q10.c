//Write a C program with two functions itob (n, s) and itoh (n, s). itob converts integer into binary character representation in s. Similarly itoh converts integer into hexadecimal character representation in s.

#include<stdio.h>
char ch[10];
int itob(int n, char *b)
{
	char binarych[10]={0};
	int rem, count=0;
	while(n!=0)
	{
		rem=n%2;
		n=n/2;
		
		if(rem==1)
		{
			*(b+count)='1';
		}
		else
		{
			*(b+count)='0';
		}
		count++;
	}
	for(int i=0;i<count;i++)
	{
		binarych[i]=b[count-i-1];
	}
	printf("\nBinary of a Number is : %s\n",binarych);
	printf("\nLength of a Number is : %d\n",count);
	return 0;
}

int itoh(int n)
{
	printf("\nHexadecimal Value is : %x\n\n",n);
}
int main()
{
	int n;
	char ch[20]={0};
	printf("\nEnter a Number : ");
	scanf("%d",&n);	
	itob(n,ch);
	itoh(n);
}

