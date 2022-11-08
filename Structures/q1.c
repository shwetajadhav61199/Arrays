//1. Write a program to represent time of the day in hrs, mins and secs. Use structures.

#include<stdio.h>
#include<time.h>
int main()
{
	struct tm *ptr;
	time_t t;
	t=time(NULL);
	ptr=localtime(&t);
	printf("%s",asctime(ptr));
	//printf("Current Time is : %s\n",__TIME__);
	return 0;
}
