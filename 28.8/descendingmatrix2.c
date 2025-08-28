#include <stdio.h>
#include <math.h>
int main(){
   int i,j,k,sp=1;
   for (i=4;i>=1;--i){
   for (k=1;k<=sp;k++){
   printf(" ");}
   for (j=1;j<=i;++j)
   {printf("*");}
   printf("\n");
   ++sp;}
    return 0;
}