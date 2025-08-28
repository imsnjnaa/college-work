#include <stdio.h>
int main(){
   int i;
   i=1;
   while(i<=10){
       printf("\n%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t",i*2,i*3,i*4,i*5,i*6,i*7,i*8,i*9,i*10);
       ++i; 
   }
   return 0;
}   