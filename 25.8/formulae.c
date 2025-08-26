#include <stdio.h>
int main()
{
 int a,b,c,res1,res2,res3,res4,res5,res6,res7,res8,res9,res10;
 printf("\nEnter value of a, b and c:");
 scanf("%d%d%d",&a,&b,&c);
 res1=(a*a)+(2*a*b)+(b*b);
 res2=(a*a)-(2*a*b)+(b*b);
 res3=(a*a)+(b*b);
 res4=(a*a)-(b*b);
 res5=(a*a)+(b*b)+(c*c)+(2*a*b)+(2*b*c)+(2*c*a);
 res6=(a*a*a)+(b*b*b)+(3*a*a*b)+(3*a*b*b);
 res7=(a*a*a)-(b*b*b);
 res8=(a*a*a)-(b*b*b)-(3*a*a*b)+(3*a*b*b);
 res9=(a*a*a*a)+(4*a*a*a*b)+(6*a*a*b*b)+(4*a*b*b*b)+(b*b*b*b);
 res10=(a-b)*(a+b)*(a*a)+(b*b);
 printf("res1=%d, res2=%d, res3=%d, res4=%d, res5=%d, res6=%d, res7=%d, res8=%d, res9=%d, res10=%d",res1,res2,res3,res4,res5,res6,res7,res8,res9,res10);
 return 0;

}