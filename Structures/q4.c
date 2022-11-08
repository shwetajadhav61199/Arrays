//Develop a program to generate marks sheet of C-DAC, Hyderabad Students (DSSD, DESD and DAC courses). Modules are different for each course. Implement this using structures, unions, arrays, loops and variables.

#include<stdio.h>
#include<string.h>
struct DASSD
{
	int rollno;
	char name[30];
	int m1,m2,m3,m4;
	float result;
	int sum;
};

int main()
{
	struct DASSD assd[50];
	int i,n;

	printf("\n\t|| DASSD Students Detalis ||\t\n");
	printf("\nEnter Number of Students : ");
	scanf("%d",&n);
  	for(i=0;i<n;i++)
	{
		printf("\nEnter Roll No : ");
		scanf("%d",&assd[i].rollno);

		printf("\nEnter Student Name : ");
		scanf("%s",assd[i].name);
		
		printf("\nEnter Module 1 Exam Marks out of 100 : ");
		scanf("%d",&assd[i].m1);
		
		printf("\nEnter Module 2 Exam Marks out of 100 : ");
		scanf("%d",&assd[i].m2);

		printf("\nEnter Module 3 Exam Marks out of 100 : ");
		scanf("%d",&assd[i].m3);

		printf("\nEnter Module 4 Exam Marks out of 100 : ");
		scanf("%d",&assd[i].m4);
	}
	for(i=0;i<n;i++)
	{
		printf("\n******************DASSD Student %d Marksheet******************\n\n",i+1);
		printf("\nStudent Roll No is      : %d",assd[i].rollno);
		printf("\nStudent Name is         : %s",assd[i].name);
		
		if(assd[i].m1<101)
		{
			printf("\nC Concepts Module       : %d",assd[i].m1);
		}
		else
		{
			printf("\nEnter Marks out of 100 of C Module..!");
		}	
		if(assd[i].m2<101)
		{
			printf("\nJava Module	        : %d",assd[i].m2);
		}
		else
		{
			printf("\nEnter Marks out of 100 of Java Module..!");
		}	
		if(assd[i].m3<101)
		{
			printf("\nData Structures Module  : %d",assd[i].m3);
		}
		else
		{
			printf("\nEnter Marks out of 100 of DS Module..!");
		}
		if(assd[i].m4<101)
		{
			printf("\nLinux OS Module	        : %d\n",assd[i].m4);
		}
		else
		{
			printf("\nEnter Marks out of 100 of Linux OS Module..!");
		}	
	int sum;
	assd[i].sum=assd[i].m1 + assd[i].m2 + assd[i].m3 + assd[i].m4;
	assd[i].result=(assd[i].sum/4);
	
		printf("\nResult is               : %.1f\n",assd[i].result);
		
	if(assd[i].result>=75.00 && assd[i].result<=100)
	{
		printf("\nFirst Class With Distinction!\n");
	}
	else if(assd[i].result<75 && assd[i].result>=60)
	{
		printf("\nFirst Class!\n");
	}
	else if(assd[i].result<60 && assd[i].result>=50)
	{
		printf("\nSecond Class!\n");
	}
	else if(assd[i].result<=50 && assd[i].result>=35)
	{
		printf("\nPass!\n");
	}
	else
	{
		printf("\nBetter Luck Next Time.....!\n");
	}
	printf("\n--------------------------------------------------------------\n");
	}

struct DAC
{
	int rollno;
	char name[30];
	int m1,m2,m3,m4;
	float result;
	int sum1;
};
	struct DAC dacstd[50];
	int i1,n1;
	
	printf("\n\t|| DAC Students Detalis ||\t\n");
	printf("\nEnter Number of Students : ");
	scanf("%d",&n1);
	
  	for(i1=0;i1<n1;i1++)
	{
		printf("\nEnter Roll No : ");
		scanf("%d",&dacstd[i1].rollno);

		printf("\nEnter Student Name : ");
		scanf("%s",dacstd[i].name);

		printf("\nEnter 1st Module Marks : ");
		scanf("%d",&dacstd[i1].m1);

		printf("\nEnter 2nd Module Marks : ");
		scanf("%d",&dacstd[i1].m2);

		printf("\nEnter 3rd Module Marks : ");
		scanf("%d",&dacstd[i1].m3);

		printf("\nEnter 4th Module Marks : ");
		scanf("%d",&dacstd[i1].m4);
	}
	printf("\n");
	for(i1=0;i1<n1;i1++)
	{
		printf("\n*****************DAC Student %d Marksheet****************\n\n",i1+1);
		printf("\nStudent Roll No is      : %d",dacstd[i1].rollno);
		printf("\nStudent Name is         : %s",dacstd[i1].name);
		printf("\nC Concepts Module       : %d",dacstd[i1].m1);
		printf("\nJava Module	        : %d",dacstd[i1].m2);
		printf("\nData Structures Module  : %d",dacstd[i1].m3);
		printf("\nLinux OS Module	        : %d\n",dacstd[i1].m4);
	
	int sum1;
	dacstd[i1].sum1=dacstd[i1].m1 + dacstd[i1].m2 + dacstd[i1].m3 + dacstd[i1].m4;
	dacstd[i1].result=(dacstd[i1].sum1/4);
	
	printf("\nResult is               : %.1f\n",dacstd[i1].result);
	if(dacstd[i1].result>=75.00 && dacstd[i1].result<=100)
	{
		printf("\nFirst Class With Distinction!\n");
	}
	else if(dacstd[i1].result<75 && dacstd[i1].result>=60)
	{
		printf("\nFirst Class!\n");
	}
	else if(dacstd[i1].result<60 && dacstd[i1].result>=50)
	{
		printf("\nSecond Class!\n");
	}
	else if(dacstd[i1].result<50 && dacstd[i1].result>=35)
	{
		printf("\nPass!\n");
	}
	else
	{
		printf("\nBetter Luck Next Time.....!\n");
	}
	printf("\n--------------------------------------------------------------\n");
	}
struct DESD
{
	int rollno;
	char name[30];
	int m1,m2,m3,m4;
	float result;
	int sum2;
};
	struct DESD dest[50];
	int i2,n2;
	
	printf("\n\t|| DESD Students Detalis ||\t\n");
	printf("\nEnter Number of Students : ");
	scanf("%d",&n2);
	
  	for(i2=0;i2<n2;i2++)
	{
		printf("\nEnter Roll No : ");
		scanf("%d",&dest[i2].rollno);

		printf("\nEnter Student Name : ");
		scanf("%s",dest[i2].name);

		printf("\nEnter 1st Module Marks : ");
		scanf("%d",&dest[i2].m1);

		printf("\nEnter 2nd Module Marks : ");
		scanf("%d",&dest[i2].m2);

		printf("\nEnter 3rd Module Marks : ");
		scanf("%d",&dest[i2].m3);

		printf("\nEnter 4th Module Marks : ");
		scanf("%d",&dest[i2].m4);
	}
	printf("\n");
	for(i2=0;i2<n2;i2++)
	{
		printf("\n*******************DESD Student %d Marksheet****************\n\n",i2+1);
		printf("\nStudent Roll No is      : %d",dest[i2].rollno);
		printf("\nStudent Name is         : %s",dest[i2].name);
		printf("\nC Concepts Module       : %d",dest[i2].m1);
		printf("\nJava Module	        : %d",dest[i2].m2);
		printf("\nData Structures Module  : %d",dest[i2].m3);
		printf("\nOOPS                         : %d\n",dest[i2].m4);
	
	int sum2;
	dest[i2].sum2=dest[i2].m1 + dest[i2].m2 + dest[i2].m3 + dest[i2].m4;
	dest[i2].result=(dest[i2].sum2/4);
	
	printf("\nResult is               : %.1f\n",dest[i2].result);
	
	if(dest[i2].result>=75 && dest[i2].result<=100)
	{
		printf("\nFirst Class With Distinction!\n");
	}
	else if(dest[i2].result<75 && dest[i2].result>=60)
	{
		printf("\nFirst Class!\n");
	}
	else if(dest[i2].result<60 && dest[i2].result>=50)
	{
		printf("\nSecond Class!\n");
	}
	else if(dest[i2].result<50 && dest[i2].result>=35)
	{
		printf("\nPass!\n");
	}
	else
	{
		printf("\nBetter Luck Next Time.....!\n");
	}
	printf("\n--------------------------------------------------------------\n");
	}
}
