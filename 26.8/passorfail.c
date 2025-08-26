#include <stdio.h>
int main()
{
	int a,b,c,res;
	printf("\nenter marks of three students: ", a,b,c);
	scanf("%d%d%d", &a,&b,&c);
	if (a<45)
		printf("\nfail");
	else
		printf("\na has passed");
	if (b<45)
		printf("\nfail");
	else 
	    printf("\n b has passed");
	if (c<45)
	    printf("\nfail");
	else
	    printf("\nfail");
	return 0;
}