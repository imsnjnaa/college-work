#include <stdio.h>
int main(){
   int i,sum;
   i=10; 
   sum=1;
   while(i>=1){
       sum=sum*i;
       --i; 
   }
   printf("\n%d", sum);
   return 0;
}   