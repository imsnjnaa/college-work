#include <stdio.h>
int main()
{
	int n1,n2,n3,n4,t,per;
	char grade;
	printf("\nenter marks of 4 papers: ");
	scanf("%d%d%d%d", &n1,&n2,&n3,&n4);
	t=n1+n2+n3+n4;
	per=t/4;
	if (per>=90 && per<=100)
	{grade='A';}
	else if (per>=80 && per<=90)
    {grade='B';}
	if (per>=70 && per<=80)
	{grade='C';}
	if (per>=60 && per<=70)
    {grade='D';}
    if (per>=50 && per<=60)
    {grade='E';}
    if (per>=40 && per<=50)
    {grade='F';}
    printf("\nprint grade: %c ",grade);
    scanf("%c", &grade);
	return 0;
}