#include <stdio.h>
int main()
{
 int p,t,r;
 double si;
 printf("\nEnter principle amount, time and rate of interest:");
 scanf("%d%d%d",&t,&p,&r);
 si=(p*t*r)/100;
 printf("\n Simple interest = %d", si);
 return 0;
}