#include <stdio.h>
#include <math.h>
int main()
{
 int a,b,c,root1,root2;
 printf("\n enter values for a,b and c:");
 scanf("%d%d%d",&a,&b,&c);
 root1=(-b+sqrt(b*b)-(4*a*c))/2*a;
 root2=(-b-sqrt(b*b)-(4*a*c))/2*a;
 printf("\n roots are given as %d and %d", root1, root2);
 return 0;
}
