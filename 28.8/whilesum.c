#include <stdio.h>
int main(){
   int i,sum;
   i=1; 
   sum=0;
   while(i<=10){
       sum=sum+i;
       ++i; 
   }
   printf("\nsum=%d", sum);
   return 0;
}   