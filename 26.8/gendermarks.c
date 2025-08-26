#include <stdio.h>
int main()
{
	int n1,n2,n3,m,f,t,per;
	char g;
	printf("\nenter gender of student: ",g);
	scanf("%c", &g);
	printf("\nenter marks of three students: ");
	scanf("%d%d%d",&n1,&n2,&n3);
	t=n1+n2+n3;
	per=t/3;
	if (per>=82 && g=='f')
	printf("\nstudent can take admission");
	else
	printf("\nstudent cannot take admission");
	return 0;
}