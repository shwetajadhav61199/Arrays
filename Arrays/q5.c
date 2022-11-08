//5. Program to Calculate Sum and Average of an array
#include<stdio.h>
int main()
{
	int arr[5];
	int i,sum=0,avg;
	printf("\nEnter Array Element:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
		sum+=arr[i];	//SUM
		avg=sum/arr[i];	//AVERAGE
	}
	printf("\nAddition of Array Elements is:%d\n",sum);
	printf("\nAverage is:%d\n",avg);
}
