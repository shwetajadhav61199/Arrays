//Develop sample programs using preprocessor operators #, ## and also conditional compilation.
#include<stdio.h>
#define string(X) #X //Using #
#define var(X1,Y1) X1##Y1 //Using ##

int main()
{
	//Using #
	int ab=10;
	printf("\nab is : %d\n",var(a,b));
	
	//Using ##
	printf("\n%s, ",string(Hello Students));
	printf("%s\n",string(Welcome to CDAC!));
	
	//Using Conditional Compilation #if.....#endif
	#if 20>10
		printf("\nNumber n(20) is Largest Number than m(10)!\n\n");
	#else
		printf("\nNumber m(10) is Largest Number than n(20)!\n\n");
	#endif
	
	return 0;
}
