#include <stdio.h>
#include <math.h>
int main()
{
 int HRA,DA,TA,bs,gs;
 printf("\n enter basic salary:");
 scanf("%d",&bs);
 HRA=bs*0.60;
 DA=bs*0.40;
 TA=bs*0.50;
 gs=bs+HRA+TA+DA;
 printf("\n gross salary is %d", gs);
 return 0;
}
