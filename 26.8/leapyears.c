#include <stdio.h>
int main()
{
	int y,res1,res2;
	printf("\nenter year: ");
	scanf("%d", &y);
	if (y%100!=0)
	if (y%4==0)
	{printf("\nnon century leap year");}
	else
	{printf("\nnot leap year");}
	if (y%400==0)
	{printf("\ncentury leap year");}
	else
	{printf("\nleap year");}
	return 0;
}