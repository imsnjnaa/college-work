#include <stdio.h>
#include <math.h>
int main()
{
 int l,b,area,perimeter;
 printf("\nenter length and breadth of rectangle:");
 scanf("%d%d",&l,&b);
 area=(l*b);
 perimeter=(2*(l+b));
 printf("\n area of rectangle is %d, perimeter of rectangle is %d", area,perimeter);
 return 0;
}