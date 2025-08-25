#include <stdio.h>
#include <math.h>
int main()
{
 int a,b;
 printf("\n enter hours to convert to minutes:");
 scanf("%d",&a);
 a=a*60;
 printf("\n a is converted to %d", a);
 printf("\n enter minutes to convert to seconds:");
 scanf("%d", &b);
 b=b*60;
 printf("\n b is converted to %d",b);
 return 0;
}