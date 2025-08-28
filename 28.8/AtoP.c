#include <stdio.h>
#include <math.h>
int main(){
   int i,j,n=65;
   for (i=1;i<=4;++i)
   {for (j=1;j<=4;++j)
   {printf("%c",n);
       ++n;}
   printf("\n");}
    return 0;
}