#include <stdio.h>
int main(){
   int i,sum;
   i=1; 
   sum=1;
   while(i<=11){
       sum=sum*i;
       ++i; 
   }
   printf("\nsum=%d", sum);
   return 0;
}   