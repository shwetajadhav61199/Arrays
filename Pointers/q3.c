/*A C program contains the following declaration
char *color[6] = {“red”, “green”, “blue”, “white”, “black”, “yellow”};
● What is the meaning of color?
● What is the meaning of (color+2);
● What is the value of *color?
● What is the value of *(color+2)?
● How do color[5] and *(color + 5) differ?.*/

#include<stdio.h>
#include<string.h>
int main()
{
	char *color[6] = {"red","green","blue","white","black","yellow"};
	
	printf("\nMeaning of Color     : %p\n",color);
	printf("\nMeaning of (Color+2) : %p\n",(color+2));
	printf("\nValue of *Color      : %s\n",*color);
	printf("\nValue of *(Color+2)  : %s\n",*(color+2));
	printf("\nColor[5] is          : %p\n",color[5]);
	printf("\n*(Color+5) is        : %s\n\n",*(color+5));
}
