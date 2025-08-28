#include <stdio.h>
#include <math.h>
int main(){
   int i,j,n=1;
   for (i=1;i<=4;++i)
   {for (j=1;j<=4;++j)
   {printf("%d\t",n);
       ++n;}
   printf("\n");}
    return 0;
}