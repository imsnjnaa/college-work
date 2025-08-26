#include <stdio.h>
#include <math.h>
int main()
{
 int a,b;
 printf("\nenter value of a and b:");
 scanf("%d%d",&a,&b);
 a=a+b;
 b=a-b;
 a=a-b;
 printf("\n a is swapped to %d and b is swapped to %d", a,b);
 return 0;
}